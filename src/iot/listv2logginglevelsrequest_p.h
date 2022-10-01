// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTV2LOGGINGLEVELSREQUEST_P_H
#define QTAWS_LISTV2LOGGINGLEVELSREQUEST_P_H

#include "iotrequest_p.h"
#include "listv2logginglevelsrequest.h"

namespace QtAws {
namespace IoT {

class ListV2LoggingLevelsRequest;

class ListV2LoggingLevelsRequestPrivate : public IoTRequestPrivate {

public:
    ListV2LoggingLevelsRequestPrivate(const IoTRequest::Action action,
                                   ListV2LoggingLevelsRequest * const q);
    ListV2LoggingLevelsRequestPrivate(const ListV2LoggingLevelsRequestPrivate &other,
                                   ListV2LoggingLevelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListV2LoggingLevelsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

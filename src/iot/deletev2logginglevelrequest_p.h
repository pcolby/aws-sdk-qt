// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEV2LOGGINGLEVELREQUEST_P_H
#define QTAWS_DELETEV2LOGGINGLEVELREQUEST_P_H

#include "iotrequest_p.h"
#include "deletev2logginglevelrequest.h"

namespace QtAws {
namespace IoT {

class DeleteV2LoggingLevelRequest;

class DeleteV2LoggingLevelRequestPrivate : public IoTRequestPrivate {

public:
    DeleteV2LoggingLevelRequestPrivate(const IoTRequest::Action action,
                                   DeleteV2LoggingLevelRequest * const q);
    DeleteV2LoggingLevelRequestPrivate(const DeleteV2LoggingLevelRequestPrivate &other,
                                   DeleteV2LoggingLevelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteV2LoggingLevelRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

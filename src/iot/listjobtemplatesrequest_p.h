// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBTEMPLATESREQUEST_P_H
#define QTAWS_LISTJOBTEMPLATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listjobtemplatesrequest.h"

namespace QtAws {
namespace IoT {

class ListJobTemplatesRequest;

class ListJobTemplatesRequestPrivate : public IoTRequestPrivate {

public:
    ListJobTemplatesRequestPrivate(const IoTRequest::Action action,
                                   ListJobTemplatesRequest * const q);
    ListJobTemplatesRequestPrivate(const ListJobTemplatesRequestPrivate &other,
                                   ListJobTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobTemplatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

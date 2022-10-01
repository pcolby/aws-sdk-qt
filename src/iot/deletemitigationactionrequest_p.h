// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMITIGATIONACTIONREQUEST_P_H
#define QTAWS_DELETEMITIGATIONACTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deletemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteMitigationActionRequest;

class DeleteMitigationActionRequestPrivate : public IoTRequestPrivate {

public:
    DeleteMitigationActionRequestPrivate(const IoTRequest::Action action,
                                   DeleteMitigationActionRequest * const q);
    DeleteMitigationActionRequestPrivate(const DeleteMitigationActionRequestPrivate &other,
                                   DeleteMitigationActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMitigationActionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

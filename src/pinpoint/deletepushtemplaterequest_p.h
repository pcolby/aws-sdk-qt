// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUSHTEMPLATEREQUEST_P_H
#define QTAWS_DELETEPUSHTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletepushtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeletePushTemplateRequest;

class DeletePushTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    DeletePushTemplateRequestPrivate(const PinpointRequest::Action action,
                                   DeletePushTemplateRequest * const q);
    DeletePushTemplateRequestPrivate(const DeletePushTemplateRequestPrivate &other,
                                   DeletePushTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePushTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

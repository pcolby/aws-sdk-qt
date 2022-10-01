// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATEREQUEST_P_H
#define QTAWS_DELETEEMAILTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteemailtemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailTemplateRequest;

class DeleteEmailTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteEmailTemplateRequestPrivate(const PinpointRequest::Action action,
                                   DeleteEmailTemplateRequest * const q);
    DeleteEmailTemplateRequestPrivate(const DeleteEmailTemplateRequestPrivate &other,
                                   DeleteEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

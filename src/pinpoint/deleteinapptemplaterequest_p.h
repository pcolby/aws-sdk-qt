// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINAPPTEMPLATEREQUEST_P_H
#define QTAWS_DELETEINAPPTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteinapptemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteInAppTemplateRequest;

class DeleteInAppTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteInAppTemplateRequestPrivate(const PinpointRequest::Action action,
                                   DeleteInAppTemplateRequest * const q);
    DeleteInAppTemplateRequestPrivate(const DeleteInAppTemplateRequestPrivate &other,
                                   DeleteInAppTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInAppTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

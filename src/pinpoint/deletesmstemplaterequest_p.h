// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSTEMPLATEREQUEST_P_H
#define QTAWS_DELETESMSTEMPLATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletesmstemplaterequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsTemplateRequest;

class DeleteSmsTemplateRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteSmsTemplateRequestPrivate(const PinpointRequest::Action action,
                                   DeleteSmsTemplateRequest * const q);
    DeleteSmsTemplateRequestPrivate(const DeleteSmsTemplateRequestPrivate &other,
                                   DeleteSmsTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSmsTemplateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

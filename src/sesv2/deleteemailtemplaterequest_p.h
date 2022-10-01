// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATEREQUEST_P_H
#define QTAWS_DELETEEMAILTEMPLATEREQUEST_P_H

#include "sesv2request_p.h"
#include "deleteemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailTemplateRequest;

class DeleteEmailTemplateRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteEmailTemplateRequestPrivate(const SESv2Request::Action action,
                                   DeleteEmailTemplateRequest * const q);
    DeleteEmailTemplateRequestPrivate(const DeleteEmailTemplateRequestPrivate &other,
                                   DeleteEmailTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

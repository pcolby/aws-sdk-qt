// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_DELETECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT DeleteCustomVerificationEmailTemplateRequest : public SESv2Request {

public:
    DeleteCustomVerificationEmailTemplateRequest(const DeleteCustomVerificationEmailTemplateRequest &other);
    DeleteCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

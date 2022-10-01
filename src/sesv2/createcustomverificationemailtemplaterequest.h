// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT CreateCustomVerificationEmailTemplateRequest : public SESv2Request {

public:
    CreateCustomVerificationEmailTemplateRequest(const CreateCustomVerificationEmailTemplateRequest &other);
    CreateCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

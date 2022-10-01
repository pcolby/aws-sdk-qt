// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSES_EXPORT CreateCustomVerificationEmailTemplateRequest : public SesRequest {

public:
    CreateCustomVerificationEmailTemplateRequest(const CreateCustomVerificationEmailTemplateRequest &other);
    CreateCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomVerificationEmailTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

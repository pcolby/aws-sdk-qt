// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class UpdateCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT UpdateCustomVerificationEmailTemplateRequest : public SESv2Request {

public:
    UpdateCustomVerificationEmailTemplateRequest(const UpdateCustomVerificationEmailTemplateRequest &other);
    UpdateCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetCustomVerificationEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT GetCustomVerificationEmailTemplateRequest : public SESv2Request {

public:
    GetCustomVerificationEmailTemplateRequest(const GetCustomVerificationEmailTemplateRequest &other);
    GetCustomVerificationEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomVerificationEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif

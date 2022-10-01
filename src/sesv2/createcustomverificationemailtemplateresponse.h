// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "createcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class CreateCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT CreateCustomVerificationEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateCustomVerificationEmailTemplateResponse(const CreateCustomVerificationEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomVerificationEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(CreateCustomVerificationEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

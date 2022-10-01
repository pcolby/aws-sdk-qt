// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_CREATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesresponse.h"
#include "createcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class CreateCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSES_EXPORT CreateCustomVerificationEmailTemplateResponse : public SesResponse {
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

} // namespace Ses
} // namespace QtAws

#endif

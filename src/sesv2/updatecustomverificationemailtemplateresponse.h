// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_UPDATECUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "updatecustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT UpdateCustomVerificationEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    UpdateCustomVerificationEmailTemplateResponse(const UpdateCustomVerificationEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomVerificationEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(UpdateCustomVerificationEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

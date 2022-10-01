// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H
#define QTAWS_GETCUSTOMVERIFICATIONEMAILTEMPLATERESPONSE_H

#include "sesresponse.h"
#include "getcustomverificationemailtemplaterequest.h"

namespace QtAws {
namespace Ses {

class GetCustomVerificationEmailTemplateResponsePrivate;

class QTAWSSES_EXPORT GetCustomVerificationEmailTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    GetCustomVerificationEmailTemplateResponse(const GetCustomVerificationEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCustomVerificationEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomVerificationEmailTemplateResponse)
    Q_DISABLE_COPY(GetCustomVerificationEmailTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

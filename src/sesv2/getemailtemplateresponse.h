// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILTEMPLATERESPONSE_H
#define QTAWS_GETEMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "getemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class GetEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT GetEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    GetEmailTemplateResponse(const GetEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailTemplateResponse)
    Q_DISABLE_COPY(GetEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

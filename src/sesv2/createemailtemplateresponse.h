// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILTEMPLATERESPONSE_H
#define QTAWS_CREATEEMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "createemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT CreateEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateEmailTemplateResponse(const CreateEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailTemplateResponse)
    Q_DISABLE_COPY(CreateEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

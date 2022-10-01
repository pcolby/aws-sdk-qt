// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATETEMPLATERESPONSE_H
#define QTAWS_GENERATETEMPLATERESPONSE_H

#include "smsresponse.h"
#include "generatetemplaterequest.h"

namespace QtAws {
namespace Sms {

class GenerateTemplateResponsePrivate;

class QTAWSSMS_EXPORT GenerateTemplateResponse : public SmsResponse {
    Q_OBJECT

public:
    GenerateTemplateResponse(const GenerateTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateTemplateResponse)
    Q_DISABLE_COPY(GenerateTemplateResponse)

};

} // namespace Sms
} // namespace QtAws

#endif

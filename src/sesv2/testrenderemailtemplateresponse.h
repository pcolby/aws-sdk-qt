// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDEREMAILTEMPLATERESPONSE_H
#define QTAWS_TESTRENDEREMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "testrenderemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class TestRenderEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT TestRenderEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    TestRenderEmailTemplateResponse(const TestRenderEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestRenderEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRenderEmailTemplateResponse)
    Q_DISABLE_COPY(TestRenderEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

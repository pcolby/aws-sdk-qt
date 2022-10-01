// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTRENDERTEMPLATERESPONSE_H
#define QTAWS_TESTRENDERTEMPLATERESPONSE_H

#include "sesresponse.h"
#include "testrendertemplaterequest.h"

namespace QtAws {
namespace Ses {

class TestRenderTemplateResponsePrivate;

class QTAWSSES_EXPORT TestRenderTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    TestRenderTemplateResponse(const TestRenderTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestRenderTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRenderTemplateResponse)
    Q_DISABLE_COPY(TestRenderTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

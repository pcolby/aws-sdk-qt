// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXCHANGECODEFORTOKENRESPONSE_H
#define QTAWS_EXCHANGECODEFORTOKENRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "exchangecodefortokenrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExchangeCodeForTokenResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExchangeCodeForTokenResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ExchangeCodeForTokenResponse(const ExchangeCodeForTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExchangeCodeForTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExchangeCodeForTokenResponse)
    Q_DISABLE_COPY(ExchangeCodeForTokenResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif

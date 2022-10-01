// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGRESPONSE_H
#define QTAWS_LISTFUNCTIONSBYCODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "listfunctionsbycodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionsByCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT ListFunctionsByCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListFunctionsByCodeSigningConfigResponse(const ListFunctionsByCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionsByCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsByCodeSigningConfigResponse)
    Q_DISABLE_COPY(ListFunctionsByCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

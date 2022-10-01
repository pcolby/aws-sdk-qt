// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONCURRENCYRESPONSE_H
#define QTAWS_GETFUNCTIONCONCURRENCYRESPONSE_H

#include "lambdaresponse.h"
#include "getfunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConcurrencyResponsePrivate;

class QTAWSLAMBDA_EXPORT GetFunctionConcurrencyResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetFunctionConcurrencyResponse(const GetFunctionConcurrencyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionConcurrencyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionConcurrencyResponse)
    Q_DISABLE_COPY(GetFunctionConcurrencyResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

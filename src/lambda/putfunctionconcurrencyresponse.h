// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCONCURRENCYRESPONSE_H
#define QTAWS_PUTFUNCTIONCONCURRENCYRESPONSE_H

#include "lambdaresponse.h"
#include "putfunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionConcurrencyResponsePrivate;

class QTAWSLAMBDA_EXPORT PutFunctionConcurrencyResponse : public LambdaResponse {
    Q_OBJECT

public:
    PutFunctionConcurrencyResponse(const PutFunctionConcurrencyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFunctionConcurrencyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionConcurrencyResponse)
    Q_DISABLE_COPY(PutFunctionConcurrencyResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

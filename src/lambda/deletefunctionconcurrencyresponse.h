// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCONCURRENCYRESPONSE_H
#define QTAWS_DELETEFUNCTIONCONCURRENCYRESPONSE_H

#include "lambdaresponse.h"
#include "deletefunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionConcurrencyResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionConcurrencyResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteFunctionConcurrencyResponse(const DeleteFunctionConcurrencyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionConcurrencyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionConcurrencyResponse)
    Q_DISABLE_COPY(DeleteFunctionConcurrencyResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKERESPONSE_H
#define QTAWS_INVOKERESPONSE_H

#include "lambdaresponse.h"
#include "invokerequest.h"

namespace QtAws {
namespace Lambda {

class InvokeResponsePrivate;

class QTAWSLAMBDA_EXPORT InvokeResponse : public LambdaResponse {
    Q_OBJECT

public:
    InvokeResponse(const InvokeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeResponse)
    Q_DISABLE_COPY(InvokeResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

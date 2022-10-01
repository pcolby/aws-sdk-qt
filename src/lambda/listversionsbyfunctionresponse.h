// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERSIONSBYFUNCTIONRESPONSE_H
#define QTAWS_LISTVERSIONSBYFUNCTIONRESPONSE_H

#include "lambdaresponse.h"
#include "listversionsbyfunctionrequest.h"

namespace QtAws {
namespace Lambda {

class ListVersionsByFunctionResponsePrivate;

class QTAWSLAMBDA_EXPORT ListVersionsByFunctionResponse : public LambdaResponse {
    Q_OBJECT

public:
    ListVersionsByFunctionResponse(const ListVersionsByFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVersionsByFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVersionsByFunctionResponse)
    Q_DISABLE_COPY(ListVersionsByFunctionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALIASRESPONSE_H
#define QTAWS_GETALIASRESPONSE_H

#include "lambdaresponse.h"
#include "getaliasrequest.h"

namespace QtAws {
namespace Lambda {

class GetAliasResponsePrivate;

class QTAWSLAMBDA_EXPORT GetAliasResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetAliasResponse(const GetAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAliasResponse)
    Q_DISABLE_COPY(GetAliasResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

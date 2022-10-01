// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASRESPONSE_H
#define QTAWS_CREATEALIASRESPONSE_H

#include "lambdaresponse.h"
#include "createaliasrequest.h"

namespace QtAws {
namespace Lambda {

class CreateAliasResponsePrivate;

class QTAWSLAMBDA_EXPORT CreateAliasResponse : public LambdaResponse {
    Q_OBJECT

public:
    CreateAliasResponse(const CreateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAliasResponse)
    Q_DISABLE_COPY(CreateAliasResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

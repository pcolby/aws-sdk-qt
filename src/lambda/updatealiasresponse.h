// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASRESPONSE_H
#define QTAWS_UPDATEALIASRESPONSE_H

#include "lambdaresponse.h"
#include "updatealiasrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateAliasResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateAliasResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateAliasResponse(const UpdateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAliasResponse)
    Q_DISABLE_COPY(UpdateAliasResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

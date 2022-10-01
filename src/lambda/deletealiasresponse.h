// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASRESPONSE_H
#define QTAWS_DELETEALIASRESPONSE_H

#include "lambdaresponse.h"
#include "deletealiasrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteAliasResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteAliasResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteAliasResponse(const DeleteAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAliasResponse)
    Q_DISABLE_COPY(DeleteAliasResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

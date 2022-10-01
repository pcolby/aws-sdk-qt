// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGRESPONSE_H
#define QTAWS_DELETEFUNCTIONCODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "deletefunctioncodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteFunctionCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteFunctionCodeSigningConfigResponse(const DeleteFunctionCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionCodeSigningConfigResponse)
    Q_DISABLE_COPY(DeleteFunctionCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECODESIGNINGCONFIGRESPONSE_H
#define QTAWS_DELETECODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "deletecodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT DeleteCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    DeleteCodeSigningConfigResponse(const DeleteCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCodeSigningConfigResponse)
    Q_DISABLE_COPY(DeleteCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

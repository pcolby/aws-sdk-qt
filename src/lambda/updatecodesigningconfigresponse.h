// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODESIGNINGCONFIGRESPONSE_H
#define QTAWS_UPDATECODESIGNINGCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "updatecodesigningconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateCodeSigningConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateCodeSigningConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateCodeSigningConfigResponse(const UpdateCodeSigningConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCodeSigningConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCodeSigningConfigResponse)
    Q_DISABLE_COPY(UpdateCodeSigningConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

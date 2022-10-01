// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONURLCONFIGRESPONSE_H
#define QTAWS_UPDATEFUNCTIONURLCONFIGRESPONSE_H

#include "lambdaresponse.h"
#include "updatefunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionUrlConfigResponsePrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionUrlConfigResponse : public LambdaResponse {
    Q_OBJECT

public:
    UpdateFunctionUrlConfigResponse(const UpdateFunctionUrlConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionUrlConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionUrlConfigResponse)
    Q_DISABLE_COPY(UpdateFunctionUrlConfigResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

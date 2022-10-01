// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONBYARNRESPONSE_H
#define QTAWS_GETLAYERVERSIONBYARNRESPONSE_H

#include "lambdaresponse.h"
#include "getlayerversionbyarnrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionByArnResponsePrivate;

class QTAWSLAMBDA_EXPORT GetLayerVersionByArnResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetLayerVersionByArnResponse(const GetLayerVersionByArnRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLayerVersionByArnRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLayerVersionByArnResponse)
    Q_DISABLE_COPY(GetLayerVersionByArnResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

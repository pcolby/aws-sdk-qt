// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHLAYERVERSIONRESPONSE_H
#define QTAWS_PUBLISHLAYERVERSIONRESPONSE_H

#include "lambdaresponse.h"
#include "publishlayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class PublishLayerVersionResponsePrivate;

class QTAWSLAMBDA_EXPORT PublishLayerVersionResponse : public LambdaResponse {
    Q_OBJECT

public:
    PublishLayerVersionResponse(const PublishLayerVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishLayerVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishLayerVersionResponse)
    Q_DISABLE_COPY(PublishLayerVersionResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif

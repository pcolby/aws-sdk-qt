// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARTIFACTURLRESPONSE_H
#define QTAWS_GETARTIFACTURLRESPONSE_H

#include "amplifyresponse.h"
#include "getartifacturlrequest.h"

namespace QtAws {
namespace Amplify {

class GetArtifactUrlResponsePrivate;

class QTAWSAMPLIFY_EXPORT GetArtifactUrlResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GetArtifactUrlResponse(const GetArtifactUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetArtifactUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetArtifactUrlResponse)
    Q_DISABLE_COPY(GetArtifactUrlResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEINGESTENDPOINTCREDENTIALSRESPONSE_H
#define QTAWS_ROTATEINGESTENDPOINTCREDENTIALSRESPONSE_H

#include "mediapackageresponse.h"
#include "rotateingestendpointcredentialsrequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateIngestEndpointCredentialsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT RotateIngestEndpointCredentialsResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    RotateIngestEndpointCredentialsResponse(const RotateIngestEndpointCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RotateIngestEndpointCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateIngestEndpointCredentialsResponse)
    Q_DISABLE_COPY(RotateIngestEndpointCredentialsResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

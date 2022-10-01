// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEINGESTENDPOINTCREDENTIALSRESPONSE_P_H
#define QTAWS_ROTATEINGESTENDPOINTCREDENTIALSRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class RotateIngestEndpointCredentialsResponse;

class RotateIngestEndpointCredentialsResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit RotateIngestEndpointCredentialsResponsePrivate(RotateIngestEndpointCredentialsResponse * const q);

    void parseRotateIngestEndpointCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RotateIngestEndpointCredentialsResponse)
    Q_DISABLE_COPY(RotateIngestEndpointCredentialsResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

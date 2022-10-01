// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARTIFACTURLRESPONSE_P_H
#define QTAWS_GETARTIFACTURLRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetArtifactUrlResponse;

class GetArtifactUrlResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetArtifactUrlResponsePrivate(GetArtifactUrlResponse * const q);

    void parseGetArtifactUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetArtifactUrlResponse)
    Q_DISABLE_COPY(GetArtifactUrlResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif

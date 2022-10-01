// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTVERSIONARTIFACTRESPONSE_P_H
#define QTAWS_GETCOMPONENTVERSIONARTIFACTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentVersionArtifactResponse;

class GetComponentVersionArtifactResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit GetComponentVersionArtifactResponsePrivate(GetComponentVersionArtifactResponse * const q);

    void parseGetComponentVersionArtifactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComponentVersionArtifactResponse)
    Q_DISABLE_COPY(GetComponentVersionArtifactResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif

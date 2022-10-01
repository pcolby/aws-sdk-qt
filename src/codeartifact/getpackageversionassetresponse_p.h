// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONASSETRESPONSE_P_H
#define QTAWS_GETPACKAGEVERSIONASSETRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionAssetResponse;

class GetPackageVersionAssetResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetPackageVersionAssetResponsePrivate(GetPackageVersionAssetResponse * const q);

    void parseGetPackageVersionAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionAssetResponse)
    Q_DISABLE_COPY(GetPackageVersionAssetResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

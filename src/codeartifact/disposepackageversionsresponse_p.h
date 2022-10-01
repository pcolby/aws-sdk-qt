// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISPOSEPACKAGEVERSIONSRESPONSE_P_H
#define QTAWS_DISPOSEPACKAGEVERSIONSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DisposePackageVersionsResponse;

class DisposePackageVersionsResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DisposePackageVersionsResponsePrivate(DisposePackageVersionsResponse * const q);

    void parseDisposePackageVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisposePackageVersionsResponse)
    Q_DISABLE_COPY(DisposePackageVersionsResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

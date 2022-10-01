// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPACKAGEVERSIONSRESPONSE_P_H
#define QTAWS_COPYPACKAGEVERSIONSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class CopyPackageVersionsResponse;

class CopyPackageVersionsResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit CopyPackageVersionsResponsePrivate(CopyPackageVersionsResponse * const q);

    void parseCopyPackageVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyPackageVersionsResponse)
    Q_DISABLE_COPY(CopyPackageVersionsResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEVERSIONSRESPONSE_P_H
#define QTAWS_DELETEPACKAGEVERSIONSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class DeletePackageVersionsResponse;

class DeletePackageVersionsResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit DeletePackageVersionsResponsePrivate(DeletePackageVersionsResponse * const q);

    void parseDeletePackageVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePackageVersionsResponse)
    Q_DISABLE_COPY(DeletePackageVersionsResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONSRESPONSE_P_H
#define QTAWS_LISTPACKAGEVERSIONSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionsResponse;

class ListPackageVersionsResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit ListPackageVersionsResponsePrivate(ListPackageVersionsResponse * const q);

    void parseListPackageVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionsResponse)
    Q_DISABLE_COPY(ListPackageVersionsResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

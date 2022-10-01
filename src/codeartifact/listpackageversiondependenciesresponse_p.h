// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONDEPENDENCIESRESPONSE_P_H
#define QTAWS_LISTPACKAGEVERSIONDEPENDENCIESRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionDependenciesResponse;

class ListPackageVersionDependenciesResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit ListPackageVersionDependenciesResponsePrivate(ListPackageVersionDependenciesResponse * const q);

    void parseListPackageVersionDependenciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionDependenciesResponse)
    Q_DISABLE_COPY(ListPackageVersionDependenciesResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

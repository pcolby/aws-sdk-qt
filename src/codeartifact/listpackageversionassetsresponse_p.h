// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONASSETSRESPONSE_P_H
#define QTAWS_LISTPACKAGEVERSIONASSETSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionAssetsResponse;

class ListPackageVersionAssetsResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit ListPackageVersionAssetsResponsePrivate(ListPackageVersionAssetsResponse * const q);

    void parseListPackageVersionAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackageVersionAssetsResponse)
    Q_DISABLE_COPY(ListPackageVersionAssetsResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONREADMERESPONSE_P_H
#define QTAWS_GETPACKAGEVERSIONREADMERESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionReadmeResponse;

class GetPackageVersionReadmeResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit GetPackageVersionReadmeResponsePrivate(GetPackageVersionReadmeResponse * const q);

    void parseGetPackageVersionReadmeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPackageVersionReadmeResponse)
    Q_DISABLE_COPY(GetPackageVersionReadmeResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

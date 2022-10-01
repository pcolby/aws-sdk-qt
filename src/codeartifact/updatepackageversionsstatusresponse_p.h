// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEVERSIONSSTATUSRESPONSE_P_H
#define QTAWS_UPDATEPACKAGEVERSIONSSTATUSRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class UpdatePackageVersionsStatusResponse;

class UpdatePackageVersionsStatusResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit UpdatePackageVersionsStatusResponsePrivate(UpdatePackageVersionsStatusResponse * const q);

    void parseUpdatePackageVersionsStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePackageVersionsStatusResponse)
    Q_DISABLE_COPY(UpdatePackageVersionsStatusResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPACKAGEORIGINCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTPACKAGEORIGINCONFIGURATIONRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class PutPackageOriginConfigurationResponse;

class PutPackageOriginConfigurationResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit PutPackageOriginConfigurationResponsePrivate(PutPackageOriginConfigurationResponse * const q);

    void parsePutPackageOriginConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPackageOriginConfigurationResponse)
    Q_DISABLE_COPY(PutPackageOriginConfigurationResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

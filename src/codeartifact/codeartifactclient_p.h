// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEARTIFACTCLIENT_P_H
#define QTAWS_CODEARTIFACTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactClient;

class CodeArtifactClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeArtifactClientPrivate(CodeArtifactClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeArtifactClient)
    Q_DISABLE_COPY(CodeArtifactClientPrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

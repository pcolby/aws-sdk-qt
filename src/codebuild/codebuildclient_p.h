// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEBUILDCLIENT_P_H
#define QTAWS_CODEBUILDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeBuild {

class CodeBuildClient;

class CodeBuildClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeBuildClientPrivate(CodeBuildClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeBuildClient)
    Q_DISABLE_COPY(CodeBuildClientPrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

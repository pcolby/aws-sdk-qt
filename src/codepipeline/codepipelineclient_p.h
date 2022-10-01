// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEPIPELINECLIENT_P_H
#define QTAWS_CODEPIPELINECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodePipeline {

class CodePipelineClient;

class CodePipelineClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodePipelineClientPrivate(CodePipelineClient * const q);

private:
    Q_DECLARE_PUBLIC(CodePipelineClient)
    Q_DISABLE_COPY(CodePipelineClientPrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

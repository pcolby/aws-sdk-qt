// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDREQUEST_H
#define QTAWS_STARTBUILDREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildRequestPrivate;

class QTAWSCODEBUILD_EXPORT StartBuildRequest : public CodeBuildRequest {

public:
    StartBuildRequest(const StartBuildRequest &other);
    StartBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

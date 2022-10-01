// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTREQUEST_H
#define QTAWS_UPDATEPROJECTREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectRequestPrivate;

class QTAWSCODEBUILD_EXPORT UpdateProjectRequest : public CodeBuildRequest {

public:
    UpdateProjectRequest(const UpdateProjectRequest &other);
    UpdateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

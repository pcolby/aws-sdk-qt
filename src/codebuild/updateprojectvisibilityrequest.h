// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTVISIBILITYREQUEST_H
#define QTAWS_UPDATEPROJECTVISIBILITYREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectVisibilityRequestPrivate;

class QTAWSCODEBUILD_EXPORT UpdateProjectVisibilityRequest : public CodeBuildRequest {

public:
    UpdateProjectVisibilityRequest(const UpdateProjectVisibilityRequest &other);
    UpdateProjectVisibilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectVisibilityRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

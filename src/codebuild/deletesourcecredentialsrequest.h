// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCECREDENTIALSREQUEST_H
#define QTAWS_DELETESOURCECREDENTIALSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteSourceCredentialsRequestPrivate;

class QTAWSCODEBUILD_EXPORT DeleteSourceCredentialsRequest : public CodeBuildRequest {

public:
    DeleteSourceCredentialsRequest(const DeleteSourceCredentialsRequest &other);
    DeleteSourceCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

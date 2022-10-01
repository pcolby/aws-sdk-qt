// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCECREDENTIALSREQUEST_P_H
#define QTAWS_DELETESOURCECREDENTIALSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "deletesourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteSourceCredentialsRequest;

class DeleteSourceCredentialsRequestPrivate : public CodeBuildRequestPrivate {

public:
    DeleteSourceCredentialsRequestPrivate(const CodeBuildRequest::Action action,
                                   DeleteSourceCredentialsRequest * const q);
    DeleteSourceCredentialsRequestPrivate(const DeleteSourceCredentialsRequestPrivate &other,
                                   DeleteSourceCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

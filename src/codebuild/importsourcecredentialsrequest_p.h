// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSOURCECREDENTIALSREQUEST_P_H
#define QTAWS_IMPORTSOURCECREDENTIALSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "importsourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ImportSourceCredentialsRequest;

class ImportSourceCredentialsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ImportSourceCredentialsRequestPrivate(const CodeBuildRequest::Action action,
                                   ImportSourceCredentialsRequest * const q);
    ImportSourceCredentialsRequestPrivate(const ImportSourceCredentialsRequestPrivate &other,
                                   ImportSourceCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

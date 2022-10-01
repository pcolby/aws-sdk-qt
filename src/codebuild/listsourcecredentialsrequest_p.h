// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCECREDENTIALSREQUEST_P_H
#define QTAWS_LISTSOURCECREDENTIALSREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listsourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSourceCredentialsRequest;

class ListSourceCredentialsRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListSourceCredentialsRequestPrivate(const CodeBuildRequest::Action action,
                                   ListSourceCredentialsRequest * const q);
    ListSourceCredentialsRequestPrivate(const ListSourceCredentialsRequestPrivate &other,
                                   ListSourceCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

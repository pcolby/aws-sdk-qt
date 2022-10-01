// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESREQUEST_P_H
#define QTAWS_LISTBUILDBATCHESREQUEST_P_H

#include "codebuildrequest_p.h"
#include "listbuildbatchesrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesRequest;

class ListBuildBatchesRequestPrivate : public CodeBuildRequestPrivate {

public:
    ListBuildBatchesRequestPrivate(const CodeBuildRequest::Action action,
                                   ListBuildBatchesRequest * const q);
    ListBuildBatchesRequestPrivate(const ListBuildBatchesRequestPrivate &other,
                                   ListBuildBatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBuildBatchesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

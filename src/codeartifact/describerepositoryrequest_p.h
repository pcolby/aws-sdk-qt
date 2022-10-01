// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYREQUEST_P_H
#define QTAWS_DESCRIBEREPOSITORYREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "describerepositoryrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeRepositoryRequest;

class DescribeRepositoryRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DescribeRepositoryRequestPrivate(const CodeArtifactRequest::Action action,
                                   DescribeRepositoryRequest * const q);
    DescribeRepositoryRequestPrivate(const DescribeRepositoryRequestPrivate &other,
                                   DescribeRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

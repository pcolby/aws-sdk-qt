// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGEREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "describepackagerequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribePackageRequest;

class DescribePackageRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DescribePackageRequestPrivate(const CodeArtifactRequest::Action action,
                                   DescribePackageRequest * const q);
    DescribePackageRequestPrivate(const DescribePackageRequestPrivate &other,
                                   DescribePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackageRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

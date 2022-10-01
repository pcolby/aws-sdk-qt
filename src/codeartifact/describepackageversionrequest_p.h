// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGEVERSIONREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "describepackageversionrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribePackageVersionRequest;

class DescribePackageVersionRequestPrivate : public CodeArtifactRequestPrivate {

public:
    DescribePackageVersionRequestPrivate(const CodeArtifactRequest::Action action,
                                   DescribePackageVersionRequest * const q);
    DescribePackageVersionRequestPrivate(const DescribePackageVersionRequestPrivate &other,
                                   DescribePackageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackageVersionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

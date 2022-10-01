// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEVERSIONREQUEST_H
#define QTAWS_DESCRIBEPACKAGEVERSIONREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribePackageVersionRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DescribePackageVersionRequest : public CodeArtifactRequest {

public:
    DescribePackageVersionRequest(const DescribePackageVersionRequest &other);
    DescribePackageVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageVersionRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

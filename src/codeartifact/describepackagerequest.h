// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEREQUEST_H
#define QTAWS_DESCRIBEPACKAGEREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribePackageRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DescribePackageRequest : public CodeArtifactRequest {

public:
    DescribePackageRequest(const DescribePackageRequest &other);
    DescribePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

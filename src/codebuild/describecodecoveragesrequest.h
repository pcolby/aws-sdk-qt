// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODECOVERAGESREQUEST_H
#define QTAWS_DESCRIBECODECOVERAGESREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DescribeCodeCoveragesRequestPrivate;

class QTAWSCODEBUILD_EXPORT DescribeCodeCoveragesRequest : public CodeBuildRequest {

public:
    DescribeCodeCoveragesRequest(const DescribeCodeCoveragesRequest &other);
    DescribeCodeCoveragesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeCoveragesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

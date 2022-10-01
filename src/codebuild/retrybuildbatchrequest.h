// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDBATCHREQUEST_H
#define QTAWS_RETRYBUILDBATCHREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildBatchRequestPrivate;

class QTAWSCODEBUILD_EXPORT RetryBuildBatchRequest : public CodeBuildRequest {

public:
    RetryBuildBatchRequest(const RetryBuildBatchRequest &other);
    RetryBuildBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

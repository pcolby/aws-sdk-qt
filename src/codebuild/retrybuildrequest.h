// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDREQUEST_H
#define QTAWS_RETRYBUILDREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildRequestPrivate;

class QTAWSCODEBUILD_EXPORT RetryBuildRequest : public CodeBuildRequest {

public:
    RetryBuildRequest(const RetryBuildRequest &other);
    RetryBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDSREQUEST_H
#define QTAWS_BATCHGETBUILDSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildsRequestPrivate;

class QTAWSCODEBUILD_EXPORT BatchGetBuildsRequest : public CodeBuildRequest {

public:
    BatchGetBuildsRequest(const BatchGetBuildsRequest &other);
    BatchGetBuildsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBuildsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

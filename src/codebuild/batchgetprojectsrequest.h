// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPROJECTSREQUEST_H
#define QTAWS_BATCHGETPROJECTSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetProjectsRequestPrivate;

class QTAWSCODEBUILD_EXPORT BatchGetProjectsRequest : public CodeBuildRequest {

public:
    BatchGetProjectsRequest(const BatchGetProjectsRequest &other);
    BatchGetProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

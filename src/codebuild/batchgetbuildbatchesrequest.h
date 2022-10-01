// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDBATCHESREQUEST_H
#define QTAWS_BATCHGETBUILDBATCHESREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildBatchesRequestPrivate;

class QTAWSCODEBUILD_EXPORT BatchGetBuildBatchesRequest : public CodeBuildRequest {

public:
    BatchGetBuildBatchesRequest(const BatchGetBuildBatchesRequest &other);
    BatchGetBuildBatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBuildBatchesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

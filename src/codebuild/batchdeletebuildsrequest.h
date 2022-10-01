// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEBUILDSREQUEST_H
#define QTAWS_BATCHDELETEBUILDSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchDeleteBuildsRequestPrivate;

class QTAWSCODEBUILD_EXPORT BatchDeleteBuildsRequest : public CodeBuildRequest {

public:
    BatchDeleteBuildsRequest(const BatchDeleteBuildsRequest &other);
    BatchDeleteBuildsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteBuildsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

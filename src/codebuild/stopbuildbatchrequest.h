// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDBATCHREQUEST_H
#define QTAWS_STOPBUILDBATCHREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildBatchRequestPrivate;

class QTAWSCODEBUILD_EXPORT StopBuildBatchRequest : public CodeBuildRequest {

public:
    StopBuildBatchRequest(const StopBuildBatchRequest &other);
    StopBuildBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

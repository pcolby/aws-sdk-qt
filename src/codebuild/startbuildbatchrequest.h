// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDBATCHREQUEST_H
#define QTAWS_STARTBUILDBATCHREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildBatchRequestPrivate;

class QTAWSCODEBUILD_EXPORT StartBuildBatchRequest : public CodeBuildRequest {

public:
    StartBuildBatchRequest(const StartBuildBatchRequest &other);
    StartBuildBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

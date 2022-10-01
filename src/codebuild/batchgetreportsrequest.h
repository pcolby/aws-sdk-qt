// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTSREQUEST_H
#define QTAWS_BATCHGETREPORTSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportsRequestPrivate;

class QTAWSCODEBUILD_EXPORT BatchGetReportsRequest : public CodeBuildRequest {

public:
    BatchGetReportsRequest(const BatchGetReportsRequest &other);
    BatchGetReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetReportsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

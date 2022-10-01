// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTGROUPREQUEST_H
#define QTAWS_DELETEREPORTGROUPREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportGroupRequestPrivate;

class QTAWSCODEBUILD_EXPORT DeleteReportGroupRequest : public CodeBuildRequest {

public:
    DeleteReportGroupRequest(const DeleteReportGroupRequest &other);
    DeleteReportGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

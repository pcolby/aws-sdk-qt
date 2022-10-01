// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTGROUPREQUEST_H
#define QTAWS_CREATEREPORTGROUPREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateReportGroupRequestPrivate;

class QTAWSCODEBUILD_EXPORT CreateReportGroupRequest : public CodeBuildRequest {

public:
    CreateReportGroupRequest(const CreateReportGroupRequest &other);
    CreateReportGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

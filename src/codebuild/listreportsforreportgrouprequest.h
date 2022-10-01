// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSFORREPORTGROUPREQUEST_H
#define QTAWS_LISTREPORTSFORREPORTGROUPREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsForReportGroupRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListReportsForReportGroupRequest : public CodeBuildRequest {

public:
    ListReportsForReportGroupRequest(const ListReportsForReportGroupRequest &other);
    ListReportsForReportGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportsForReportGroupRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

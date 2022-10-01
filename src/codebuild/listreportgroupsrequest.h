// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTGROUPSREQUEST_H
#define QTAWS_LISTREPORTGROUPSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportGroupsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListReportGroupsRequest : public CodeBuildRequest {

public:
    ListReportGroupsRequest(const ListReportGroupsRequest &other);
    ListReportGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportGroupsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

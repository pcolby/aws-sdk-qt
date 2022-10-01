// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDREPORTGROUPSREQUEST_H
#define QTAWS_LISTSHAREDREPORTGROUPSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedReportGroupsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListSharedReportGroupsRequest : public CodeBuildRequest {

public:
    ListSharedReportGroupsRequest(const ListSharedReportGroupsRequest &other);
    ListSharedReportGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedReportGroupsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

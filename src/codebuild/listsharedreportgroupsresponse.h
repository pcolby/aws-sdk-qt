// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDREPORTGROUPSRESPONSE_H
#define QTAWS_LISTSHAREDREPORTGROUPSRESPONSE_H

#include "codebuildresponse.h"
#include "listsharedreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedReportGroupsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListSharedReportGroupsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListSharedReportGroupsResponse(const ListSharedReportGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSharedReportGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedReportGroupsResponse)
    Q_DISABLE_COPY(ListSharedReportGroupsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

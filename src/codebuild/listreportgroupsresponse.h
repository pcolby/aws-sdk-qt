// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTGROUPSRESPONSE_H
#define QTAWS_LISTREPORTGROUPSRESPONSE_H

#include "codebuildresponse.h"
#include "listreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListReportGroupsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListReportGroupsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListReportGroupsResponse(const ListReportGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportGroupsResponse)
    Q_DISABLE_COPY(ListReportGroupsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

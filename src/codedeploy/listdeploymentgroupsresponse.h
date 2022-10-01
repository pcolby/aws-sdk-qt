// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTGROUPSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTGROUPSRESPONSE_H

#include "codedeployresponse.h"
#include "listdeploymentgroupsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentGroupsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentGroupsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListDeploymentGroupsResponse(const ListDeploymentGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentGroupsResponse)
    Q_DISABLE_COPY(ListDeploymentGroupsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

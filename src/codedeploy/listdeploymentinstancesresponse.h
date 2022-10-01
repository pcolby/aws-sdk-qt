// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTINSTANCESRESPONSE_H
#define QTAWS_LISTDEPLOYMENTINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "listdeploymentinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListDeploymentInstancesResponse(const ListDeploymentInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentInstancesResponse)
    Q_DISABLE_COPY(ListDeploymentInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

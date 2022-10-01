// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTCONFIGSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTCONFIGSRESPONSE_H

#include "codedeployresponse.h"
#include "listdeploymentconfigsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentConfigsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentConfigsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListDeploymentConfigsResponse(const ListDeploymentConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentConfigsResponse)
    Q_DISABLE_COPY(ListDeploymentConfigsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

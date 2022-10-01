// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTTARGETSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTTARGETSRESPONSE_H

#include "codedeployresponse.h"
#include "listdeploymenttargetsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentTargetsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentTargetsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListDeploymentTargetsResponse(const ListDeploymentTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentTargetsResponse)
    Q_DISABLE_COPY(ListDeploymentTargetsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

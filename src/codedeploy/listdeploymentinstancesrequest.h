// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTINSTANCESREQUEST_H
#define QTAWS_LISTDEPLOYMENTINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentInstancesRequest : public CodeDeployRequest {

public:
    ListDeploymentInstancesRequest(const ListDeploymentInstancesRequest &other);
    ListDeploymentInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

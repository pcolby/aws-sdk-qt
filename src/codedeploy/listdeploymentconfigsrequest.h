// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTCONFIGSREQUEST_H
#define QTAWS_LISTDEPLOYMENTCONFIGSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentConfigsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentConfigsRequest : public CodeDeployRequest {

public:
    ListDeploymentConfigsRequest(const ListDeploymentConfigsRequest &other);
    ListDeploymentConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentConfigsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

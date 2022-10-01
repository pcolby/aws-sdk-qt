// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTTARGETSREQUEST_H
#define QTAWS_LISTDEPLOYMENTTARGETSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentTargetsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentTargetsRequest : public CodeDeployRequest {

public:
    ListDeploymentTargetsRequest(const ListDeploymentTargetsRequest &other);
    ListDeploymentTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentTargetsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

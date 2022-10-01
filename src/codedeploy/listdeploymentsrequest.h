// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSREQUEST_H
#define QTAWS_LISTDEPLOYMENTSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListDeploymentsRequest : public CodeDeployRequest {

public:
    ListDeploymentsRequest(const ListDeploymentsRequest &other);
    ListDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

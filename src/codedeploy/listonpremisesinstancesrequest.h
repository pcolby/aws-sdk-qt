// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTONPREMISESINSTANCESREQUEST_H
#define QTAWS_LISTONPREMISESINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListOnPremisesInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ListOnPremisesInstancesRequest : public CodeDeployRequest {

public:
    ListOnPremisesInstancesRequest(const ListOnPremisesInstancesRequest &other);
    ListOnPremisesInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

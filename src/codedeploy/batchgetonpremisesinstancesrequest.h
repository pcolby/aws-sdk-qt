// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETONPREMISESINSTANCESREQUEST_H
#define QTAWS_BATCHGETONPREMISESINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetOnPremisesInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetOnPremisesInstancesRequest : public CodeDeployRequest {

public:
    BatchGetOnPremisesInstancesRequest(const BatchGetOnPremisesInstancesRequest &other);
    BatchGetOnPremisesInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

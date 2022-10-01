// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETONPREMISESINSTANCESRESPONSE_H
#define QTAWS_BATCHGETONPREMISESINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetOnPremisesInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetOnPremisesInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetOnPremisesInstancesResponse(const BatchGetOnPremisesInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetOnPremisesInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetOnPremisesInstancesResponse)
    Q_DISABLE_COPY(BatchGetOnPremisesInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

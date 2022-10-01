// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETAPPLICATIONSREQUEST_H
#define QTAWS_BATCHGETAPPLICATIONSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetApplicationsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetApplicationsRequest : public CodeDeployRequest {

public:
    BatchGetApplicationsRequest(const BatchGetApplicationsRequest &other);
    BatchGetApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetApplicationsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

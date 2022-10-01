// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSREQUEST_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionTargetsRequestPrivate;

class QTAWSSSM_EXPORT DescribeAssociationExecutionTargetsRequest : public SsmRequest {

public:
    DescribeAssociationExecutionTargetsRequest(const DescribeAssociationExecutionTargetsRequest &other);
    DescribeAssociationExecutionTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssociationExecutionTargetsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

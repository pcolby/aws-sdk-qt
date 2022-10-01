// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHESREQUEST_H
#define QTAWS_DESCRIBEINSTANCEPATCHESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchesRequestPrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchesRequest : public SsmRequest {

public:
    DescribeInstancePatchesRequest(const DescribeInstancePatchesRequest &other);
    DescribeInstancePatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

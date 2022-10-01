// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESREQUEST_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesRequestPrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchStatesRequest : public SsmRequest {

public:
    DescribeInstancePatchStatesRequest(const DescribeInstancePatchStatesRequest &other);
    DescribeInstancePatchStatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchStatesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

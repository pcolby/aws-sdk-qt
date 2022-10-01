// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectiveInstanceAssociationsRequestPrivate;

class QTAWSSSM_EXPORT DescribeEffectiveInstanceAssociationsRequest : public SsmRequest {

public:
    DescribeEffectiveInstanceAssociationsRequest(const DescribeEffectiveInstanceAssociationsRequest &other);
    DescribeEffectiveInstanceAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEffectiveInstanceAssociationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

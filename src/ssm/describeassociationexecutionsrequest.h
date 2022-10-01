// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONSREQUEST_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionsRequestPrivate;

class QTAWSSSM_EXPORT DescribeAssociationExecutionsRequest : public SsmRequest {

public:
    DescribeAssociationExecutionsRequest(const DescribeAssociationExecutionsRequest &other);
    DescribeAssociationExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssociationExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

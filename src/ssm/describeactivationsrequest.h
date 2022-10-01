// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVATIONSREQUEST_H
#define QTAWS_DESCRIBEACTIVATIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeActivationsRequestPrivate;

class QTAWSSSM_EXPORT DescribeActivationsRequest : public SsmRequest {

public:
    DescribeActivationsRequest(const DescribeActivationsRequest &other);
    DescribeActivationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

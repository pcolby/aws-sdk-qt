// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPARAMETERSREQUEST_H
#define QTAWS_DESCRIBESCALINGPARAMETERSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeScalingParametersRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeScalingParametersRequest : public CloudSearchRequest {

public:
    DescribeScalingParametersRequest(const DescribeScalingParametersRequest &other);
    DescribeScalingParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingParametersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

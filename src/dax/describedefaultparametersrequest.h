// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DescribeDefaultParametersRequestPrivate;

class QTAWSDAX_EXPORT DescribeDefaultParametersRequest : public DaxRequest {

public:
    DescribeDefaultParametersRequest(const DescribeDefaultParametersRequest &other);
    DescribeDefaultParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultParametersRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

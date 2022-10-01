// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECREATEACCOUNTSTATUSREQUEST_H
#define QTAWS_DESCRIBECREATEACCOUNTSTATUSREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeCreateAccountStatusRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeCreateAccountStatusRequest : public OrganizationsRequest {

public:
    DescribeCreateAccountStatusRequest(const DescribeCreateAccountStatusRequest &other);
    DescribeCreateAccountStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCreateAccountStatusRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSREQUEST_H
#define QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeExchangeStatusRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodeExchangeStatusRequest : public RedshiftRequest {

public:
    DescribeReservedNodeExchangeStatusRequest(const DescribeReservedNodeExchangeStatusRequest &other);
    DescribeReservedNodeExchangeStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodeExchangeStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

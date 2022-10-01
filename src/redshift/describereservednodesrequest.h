// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODESREQUEST_H
#define QTAWS_DESCRIBERESERVEDNODESREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodesRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodesRequest : public RedshiftRequest {

public:
    DescribeReservedNodesRequest(const DescribeReservedNodesRequest &other);
    DescribeReservedNodesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORPRODUCERREQUEST_H
#define QTAWS_DESCRIBEDATASHARESFORPRODUCERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForProducerRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesForProducerRequest : public RedshiftRequest {

public:
    DescribeDataSharesForProducerRequest(const DescribeDataSharesForProducerRequest &other);
    DescribeDataSharesForProducerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesForProducerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

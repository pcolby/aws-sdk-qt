// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORCONSUMERREQUEST_H
#define QTAWS_DESCRIBEDATASHARESFORCONSUMERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForConsumerRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesForConsumerRequest : public RedshiftRequest {

public:
    DescribeDataSharesForConsumerRequest(const DescribeDataSharesForConsumerRequest &other);
    DescribeDataSharesForConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesForConsumerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

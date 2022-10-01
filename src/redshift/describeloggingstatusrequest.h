// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGSTATUSREQUEST_H
#define QTAWS_DESCRIBELOGGINGSTATUSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeLoggingStatusRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeLoggingStatusRequest : public RedshiftRequest {

public:
    DescribeLoggingStatusRequest(const DescribeLoggingStatusRequest &other);
    DescribeLoggingStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

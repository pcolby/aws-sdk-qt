// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESTORESTATUSREQUEST_H
#define QTAWS_DESCRIBETABLERESTORESTATUSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeTableRestoreStatusRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeTableRestoreStatusRequest : public RedshiftRequest {

public:
    DescribeTableRestoreStatusRequest(const DescribeTableRestoreStatusRequest &other);
    DescribeTableRestoreStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableRestoreStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

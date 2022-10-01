// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNERSREQUEST_H
#define QTAWS_DESCRIBEPARTNERSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribePartnersRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribePartnersRequest : public RedshiftRequest {

public:
    DescribePartnersRequest(const DescribePartnersRequest &other);
    DescribePartnersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePartnersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

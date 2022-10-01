// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESIZEREQUEST_H
#define QTAWS_DESCRIBERESIZEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeResizeRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeResizeRequest : public RedshiftRequest {

public:
    DescribeResizeRequest(const DescribeResizeRequest &other);
    DescribeResizeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResizeRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

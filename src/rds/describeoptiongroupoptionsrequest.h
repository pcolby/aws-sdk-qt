// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPOPTIONSREQUEST_H
#define QTAWS_DESCRIBEOPTIONGROUPOPTIONSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupOptionsRequestPrivate;

class QTAWSRDS_EXPORT DescribeOptionGroupOptionsRequest : public RdsRequest {

public:
    DescribeOptionGroupOptionsRequest(const DescribeOptionGroupOptionsRequest &other);
    DescribeOptionGroupOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptionGroupOptionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

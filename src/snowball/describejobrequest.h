// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBREQUEST_H
#define QTAWS_DESCRIBEJOBREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeJobRequestPrivate;

class QTAWSSNOWBALL_EXPORT DescribeJobRequest : public SnowballRequest {

public:
    DescribeJobRequest(const DescribeJobRequest &other);
    DescribeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKSTATISTICSREQUEST_H
#define QTAWS_DESCRIBEATTACKSTATISTICSREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackStatisticsRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeAttackStatisticsRequest : public ShieldRequest {

public:
    DescribeAttackStatisticsRequest(const DescribeAttackStatisticsRequest &other);
    DescribeAttackStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttackStatisticsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif

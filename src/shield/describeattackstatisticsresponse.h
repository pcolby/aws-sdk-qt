// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKSTATISTICSRESPONSE_H
#define QTAWS_DESCRIBEATTACKSTATISTICSRESPONSE_H

#include "shieldresponse.h"
#include "describeattackstatisticsrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackStatisticsResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeAttackStatisticsResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeAttackStatisticsResponse(const DescribeAttackStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAttackStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttackStatisticsResponse)
    Q_DISABLE_COPY(DescribeAttackStatisticsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif

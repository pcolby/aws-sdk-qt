// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERECOVERYINSTANCESRESPONSE_H

#include "drsresponse.h"
#include "describerecoveryinstancesrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoveryInstancesResponsePrivate;

class QTAWSDRS_EXPORT DescribeRecoveryInstancesResponse : public DrsResponse {
    Q_OBJECT

public:
    DescribeRecoveryInstancesResponse(const DescribeRecoveryInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecoveryInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoveryInstancesResponse)
    Q_DISABLE_COPY(DescribeRecoveryInstancesResponse)

};

} // namespace Drs
} // namespace QtAws

#endif

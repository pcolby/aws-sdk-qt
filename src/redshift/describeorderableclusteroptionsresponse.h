// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSRESPONSE_H
#define QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describeorderableclusteroptionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeOrderableClusterOptionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeOrderableClusterOptionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeOrderableClusterOptionsResponse(const DescribeOrderableClusterOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrderableClusterOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableClusterOptionsResponse)
    Q_DISABLE_COPY(DescribeOrderableClusterOptionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

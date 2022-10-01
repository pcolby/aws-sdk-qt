// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESFORPRODUCERRESPONSE_H
#define QTAWS_DESCRIBEDATASHARESFORPRODUCERRESPONSE_H

#include "redshiftresponse.h"
#include "describedatasharesforproducerrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesForProducerResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesForProducerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeDataSharesForProducerResponse(const DescribeDataSharesForProducerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSharesForProducerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesForProducerResponse)
    Q_DISABLE_COPY(DescribeDataSharesForProducerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

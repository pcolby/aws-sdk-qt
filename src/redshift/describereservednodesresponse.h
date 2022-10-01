// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDNODESRESPONSE_H

#include "redshiftresponse.h"
#include "describereservednodesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodesResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeReservedNodesResponse(const DescribeReservedNodesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedNodesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodesResponse)
    Q_DISABLE_COPY(DescribeReservedNodesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

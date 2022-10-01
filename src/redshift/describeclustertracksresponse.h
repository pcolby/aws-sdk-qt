// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERTRACKSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERTRACKSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclustertracksrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterTracksResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterTracksResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterTracksResponse(const DescribeClusterTracksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterTracksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterTracksResponse)
    Q_DISABLE_COPY(DescribeClusterTracksResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTSRESPONSE_H

#include "timestreamwriteresponse.h"
#include "describeendpointsrequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeEndpointsResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DescribeEndpointsResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    DescribeEndpointsResponse(const DescribeEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointsResponse)
    Q_DISABLE_COPY(DescribeEndpointsResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif

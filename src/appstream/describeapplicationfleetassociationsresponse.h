// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSRESPONSE_H

#include "appstreamresponse.h"
#include "describeapplicationfleetassociationsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationFleetAssociationsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeApplicationFleetAssociationsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeApplicationFleetAssociationsResponse(const DescribeApplicationFleetAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationFleetAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationFleetAssociationsResponse)
    Q_DISABLE_COPY(DescribeApplicationFleetAssociationsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif

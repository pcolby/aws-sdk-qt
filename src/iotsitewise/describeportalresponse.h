// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTALRESPONSE_H
#define QTAWS_DESCRIBEPORTALRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribePortalResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribePortalResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribePortalResponse(const DescribePortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePortalResponse)
    Q_DISABLE_COPY(DescribePortalResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

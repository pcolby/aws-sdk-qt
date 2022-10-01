// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETRESPONSE_H
#define QTAWS_DESCRIBEASSETRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAssetResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeAssetResponse(const DescribeAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssetResponse)
    Q_DISABLE_COPY(DescribeAssetResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

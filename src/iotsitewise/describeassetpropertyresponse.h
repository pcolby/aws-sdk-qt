// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETPROPERTYRESPONSE_H
#define QTAWS_DESCRIBEASSETPROPERTYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeassetpropertyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetPropertyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAssetPropertyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeAssetPropertyResponse(const DescribeAssetPropertyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssetPropertyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssetPropertyResponse)
    Q_DISABLE_COPY(DescribeAssetPropertyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

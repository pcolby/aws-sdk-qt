// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETMODELRESPONSE_H
#define QTAWS_DESCRIBEASSETMODELRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeassetmodelrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetModelResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAssetModelResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeAssetModelResponse(const DescribeAssetModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAssetModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAssetModelResponse)
    Q_DISABLE_COPY(DescribeAssetModelResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

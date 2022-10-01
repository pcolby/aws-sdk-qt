// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETMODELRESPONSE_P_H
#define QTAWS_DESCRIBEASSETMODELRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetModelResponse;

class DescribeAssetModelResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeAssetModelResponsePrivate(DescribeAssetModelResponse * const q);

    void parseDescribeAssetModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssetModelResponse)
    Q_DISABLE_COPY(DescribeAssetModelResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

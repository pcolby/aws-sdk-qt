// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETPROPERTYRESPONSE_P_H
#define QTAWS_DESCRIBEASSETPROPERTYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetPropertyResponse;

class DescribeAssetPropertyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeAssetPropertyResponsePrivate(DescribeAssetPropertyResponse * const q);

    void parseDescribeAssetPropertyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssetPropertyResponse)
    Q_DISABLE_COPY(DescribeAssetPropertyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

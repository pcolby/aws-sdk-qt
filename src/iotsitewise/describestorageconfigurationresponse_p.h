// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGECONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBESTORAGECONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeStorageConfigurationResponse;

class DescribeStorageConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeStorageConfigurationResponsePrivate(DescribeStorageConfigurationResponse * const q);

    void parseDescribeStorageConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStorageConfigurationResponse)
    Q_DISABLE_COPY(DescribeStorageConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

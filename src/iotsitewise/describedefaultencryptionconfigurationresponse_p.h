// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDefaultEncryptionConfigurationResponse;

class DescribeDefaultEncryptionConfigurationResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeDefaultEncryptionConfigurationResponsePrivate(DescribeDefaultEncryptionConfigurationResponse * const q);

    void parseDescribeDefaultEncryptionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultEncryptionConfigurationResponse)
    Q_DISABLE_COPY(DescribeDefaultEncryptionConfigurationResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

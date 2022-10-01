// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DescribeLoggingConfigurationResponse;

class DescribeLoggingConfigurationResponsePrivate : public AmpResponsePrivate {

public:

    explicit DescribeLoggingConfigurationResponsePrivate(DescribeLoggingConfigurationResponse * const q);

    void parseDescribeLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingConfigurationResponse)
    Q_DISABLE_COPY(DescribeLoggingConfigurationResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecorderStatusResponse;

class DescribeConfigurationRecorderStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigurationRecorderStatusResponsePrivate(DescribeConfigurationRecorderStatusResponse * const q);

    void parseDescribeConfigurationRecorderStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRecorderStatusResponse)
    Q_DISABLE_COPY(DescribeConfigurationRecorderStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

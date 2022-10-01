// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecordersResponse;

class DescribeConfigurationRecordersResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigurationRecordersResponsePrivate(DescribeConfigurationRecordersResponse * const q);

    void parseDescribeConfigurationRecordersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRecordersResponse)
    Q_DISABLE_COPY(DescribeConfigurationRecordersResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBESECURITYCONFIGURATIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeSecurityConfigurationResponse;

class DescribeSecurityConfigurationResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeSecurityConfigurationResponsePrivate(DescribeSecurityConfigurationResponse * const q);

    void parseDescribeSecurityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityConfigurationResponse)
    Q_DISABLE_COPY(DescribeSecurityConfigurationResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

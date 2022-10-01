// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEACCESSCONTROLCONFIGURATIONRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeAccessControlConfigurationResponse;

class DescribeAccessControlConfigurationResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeAccessControlConfigurationResponsePrivate(DescribeAccessControlConfigurationResponse * const q);

    void parseDescribeAccessControlConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccessControlConfigurationResponse)
    Q_DISABLE_COPY(DescribeAccessControlConfigurationResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif

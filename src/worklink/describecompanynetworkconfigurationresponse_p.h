// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBECOMPANYNETWORKCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeCompanyNetworkConfigurationResponse;

class DescribeCompanyNetworkConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeCompanyNetworkConfigurationResponsePrivate(DescribeCompanyNetworkConfigurationResponse * const q);

    void parseDescribeCompanyNetworkConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCompanyNetworkConfigurationResponse)
    Q_DISABLE_COPY(DescribeCompanyNetworkConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

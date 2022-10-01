// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeInstanceAccessControlAttributeConfigurationResponse;

class DescribeInstanceAccessControlAttributeConfigurationResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DescribeInstanceAccessControlAttributeConfigurationResponsePrivate(DescribeInstanceAccessControlAttributeConfigurationResponse * const q);

    void parseDescribeInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(DescribeInstanceAccessControlAttributeConfigurationResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif

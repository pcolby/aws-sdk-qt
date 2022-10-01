// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DescribeConfigurationSetResponse;

class DescribeConfigurationSetResponsePrivate : public SesResponsePrivate {

public:

    explicit DescribeConfigurationSetResponsePrivate(DescribeConfigurationSetResponse * const q);

    void parseDescribeConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSetResponse)
    Q_DISABLE_COPY(DescribeConfigurationSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONREVISIONRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DescribeConfigurationRevisionResponse;

class DescribeConfigurationRevisionResponsePrivate : public MqResponsePrivate {

public:

    explicit DescribeConfigurationRevisionResponsePrivate(DescribeConfigurationRevisionResponse * const q);

    void parseDescribeConfigurationRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRevisionResponse)
    Q_DISABLE_COPY(DescribeConfigurationRevisionResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif

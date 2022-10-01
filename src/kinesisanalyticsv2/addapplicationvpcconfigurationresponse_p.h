// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONVPCCONFIGURATIONRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONVPCCONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationVpcConfigurationResponse;

class AddApplicationVpcConfigurationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationVpcConfigurationResponsePrivate(AddApplicationVpcConfigurationResponse * const q);

    void parseAddApplicationVpcConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationVpcConfigurationResponse)
    Q_DISABLE_COPY(AddApplicationVpcConfigurationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

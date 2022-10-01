// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONVPCCONFIGURATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationVpcConfigurationResponse;

class DeleteApplicationVpcConfigurationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DeleteApplicationVpcConfigurationResponsePrivate(DeleteApplicationVpcConfigurationResponse * const q);

    void parseDeleteApplicationVpcConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationVpcConfigurationResponse)
    Q_DISABLE_COPY(DeleteApplicationVpcConfigurationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

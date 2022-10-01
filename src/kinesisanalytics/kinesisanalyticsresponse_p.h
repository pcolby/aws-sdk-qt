// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSRESPONSE_P_H
#define QTAWS_KINESISANALYTICSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class KinesisAnalyticsResponse;

class KinesisAnalyticsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisAnalyticsResponsePrivate(KinesisAnalyticsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsResponse)
    Q_DISABLE_COPY(KinesisAnalyticsResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSV2RESPONSE_P_H
#define QTAWS_KINESISANALYTICSV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2Response;

class KinesisAnalyticsV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisAnalyticsV2ResponsePrivate(KinesisAnalyticsV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsV2Response)
    Q_DISABLE_COPY(KinesisAnalyticsV2ResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

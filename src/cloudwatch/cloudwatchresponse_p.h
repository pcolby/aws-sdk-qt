// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHRESPONSE_P_H
#define QTAWS_CLOUDWATCHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class CloudWatchResponse;

class CloudWatchResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudWatchResponsePrivate(CloudWatchResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudWatchResponse)
    Q_DISABLE_COPY(CloudWatchResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif

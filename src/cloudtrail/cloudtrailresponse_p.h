// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDTRAILRESPONSE_P_H
#define QTAWS_CLOUDTRAILRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class CloudTrailResponse;

class CloudTrailResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudTrailResponsePrivate(CloudTrailResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudTrailResponse)
    Q_DISABLE_COPY(CloudTrailResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

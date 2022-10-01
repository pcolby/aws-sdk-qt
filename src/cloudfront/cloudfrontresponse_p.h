// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFRONTRESPONSE_P_H
#define QTAWS_CLOUDFRONTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CloudFrontResponse;

class CloudFrontResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudFrontResponsePrivate(CloudFrontResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudFrontResponse)
    Q_DISABLE_COPY(CloudFrontResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

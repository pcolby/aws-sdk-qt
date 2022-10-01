// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONNECTRESPONSE_P_H
#define QTAWS_MEDIACONNECTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class MediaConnectResponse;

class MediaConnectResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaConnectResponsePrivate(MediaConnectResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaConnectResponse)
    Q_DISABLE_COPY(MediaConnectResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif

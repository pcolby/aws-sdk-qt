// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIALIVERESPONSE_P_H
#define QTAWS_MEDIALIVERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaLive {

class MediaLiveResponse;

class MediaLiveResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaLiveResponsePrivate(MediaLiveResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaLiveResponse)
    Q_DISABLE_COPY(MediaLiveResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

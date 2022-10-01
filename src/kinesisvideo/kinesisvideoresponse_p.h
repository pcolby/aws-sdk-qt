// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEORESPONSE_P_H
#define QTAWS_KINESISVIDEORESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoResponse;

class KinesisVideoResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisVideoResponsePrivate(KinesisVideoResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisVideoResponse)
    Q_DISABLE_COPY(KinesisVideoResponsePrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif

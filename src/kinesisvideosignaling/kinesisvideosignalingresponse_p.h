// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGRESPONSE_P_H
#define QTAWS_KINESISVIDEOSIGNALINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingResponse;

class KinesisVideoSignalingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisVideoSignalingResponsePrivate(KinesisVideoSignalingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisVideoSignalingResponse)
    Q_DISABLE_COPY(KinesisVideoSignalingResponsePrivate)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif

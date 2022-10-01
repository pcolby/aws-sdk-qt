// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTDETECTIONRESPONSE_P_H
#define QTAWS_GETSEGMENTDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetSegmentDetectionResponse;

class GetSegmentDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetSegmentDetectionResponsePrivate(GetSegmentDetectionResponse * const q);

    void parseGetSegmentDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSegmentDetectionResponse)
    Q_DISABLE_COPY(GetSegmentDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONTRACKINGRESPONSE_P_H
#define QTAWS_GETPERSONTRACKINGRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetPersonTrackingResponse;

class GetPersonTrackingResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetPersonTrackingResponsePrivate(GetPersonTrackingResponse * const q);

    void parseGetPersonTrackingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPersonTrackingResponse)
    Q_DISABLE_COPY(GetPersonTrackingResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

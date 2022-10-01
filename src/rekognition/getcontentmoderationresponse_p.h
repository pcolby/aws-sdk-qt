// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTMODERATIONRESPONSE_P_H
#define QTAWS_GETCONTENTMODERATIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetContentModerationResponse;

class GetContentModerationResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetContentModerationResponsePrivate(GetContentModerationResponse * const q);

    void parseGetContentModerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContentModerationResponse)
    Q_DISABLE_COPY(GetContentModerationResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

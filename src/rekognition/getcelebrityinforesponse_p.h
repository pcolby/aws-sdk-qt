// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYINFORESPONSE_P_H
#define QTAWS_GETCELEBRITYINFORESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityInfoResponse;

class GetCelebrityInfoResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetCelebrityInfoResponsePrivate(GetCelebrityInfoResponse * const q);

    void parseGetCelebrityInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCelebrityInfoResponse)
    Q_DISABLE_COPY(GetCelebrityInfoResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

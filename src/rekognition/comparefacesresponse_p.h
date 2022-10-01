// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPAREFACESRESPONSE_P_H
#define QTAWS_COMPAREFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CompareFacesResponse;

class CompareFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CompareFacesResponsePrivate(CompareFacesResponse * const q);

    void parseCompareFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompareFacesResponse)
    Q_DISABLE_COPY(CompareFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

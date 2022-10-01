// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXFACESRESPONSE_P_H
#define QTAWS_INDEXFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class IndexFacesResponse;

class IndexFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit IndexFacesResponsePrivate(IndexFacesResponse * const q);

    void parseIndexFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IndexFacesResponse)
    Q_DISABLE_COPY(IndexFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACESRESPONSE_P_H
#define QTAWS_LISTFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class ListFacesResponse;

class ListFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit ListFacesResponsePrivate(ListFacesResponse * const q);

    void parseListFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFacesResponse)
    Q_DISABLE_COPY(ListFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

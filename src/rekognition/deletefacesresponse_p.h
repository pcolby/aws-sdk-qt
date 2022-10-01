// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACESRESPONSE_P_H
#define QTAWS_DELETEFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DeleteFacesResponse;

class DeleteFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DeleteFacesResponsePrivate(DeleteFacesResponse * const q);

    void parseDeleteFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFacesResponse)
    Q_DISABLE_COPY(DeleteFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTIONSRESPONSE_P_H
#define QTAWS_LISTCOLLECTIONSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class ListCollectionsResponse;

class ListCollectionsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit ListCollectionsResponsePrivate(ListCollectionsResponse * const q);

    void parseListCollectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCollectionsResponse)
    Q_DISABLE_COPY(ListCollectionsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

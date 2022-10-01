// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOLLECTIONRESPONSE_P_H
#define QTAWS_CREATECOLLECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CreateCollectionResponse;

class CreateCollectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CreateCollectionResponsePrivate(CreateCollectionResponse * const q);

    void parseCreateCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCollectionResponse)
    Q_DISABLE_COPY(CreateCollectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

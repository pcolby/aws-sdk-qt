// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLLECTIONRESPONSE_P_H
#define QTAWS_DELETECOLLECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DeleteCollectionResponse;

class DeleteCollectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DeleteCollectionResponsePrivate(DeleteCollectionResponse * const q);

    void parseDeleteCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCollectionResponse)
    Q_DISABLE_COPY(DeleteCollectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

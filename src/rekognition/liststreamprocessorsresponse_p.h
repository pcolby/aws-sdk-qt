// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMPROCESSORSRESPONSE_P_H
#define QTAWS_LISTSTREAMPROCESSORSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class ListStreamProcessorsResponse;

class ListStreamProcessorsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit ListStreamProcessorsResponsePrivate(ListStreamProcessorsResponse * const q);

    void parseListStreamProcessorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamProcessorsResponse)
    Q_DISABLE_COPY(ListStreamProcessorsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

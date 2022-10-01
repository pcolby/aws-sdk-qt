// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPATIBLEIMAGESRESPONSE_P_H
#define QTAWS_LISTCOMPATIBLEIMAGESRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class ListCompatibleImagesResponse;

class ListCompatibleImagesResponsePrivate : public SnowballResponsePrivate {

public:

    explicit ListCompatibleImagesResponsePrivate(ListCompatibleImagesResponse * const q);

    void parseListCompatibleImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCompatibleImagesResponse)
    Q_DISABLE_COPY(ListCompatibleImagesResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif

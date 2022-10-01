// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESRESPONSE_P_H
#define QTAWS_LISTIMAGESRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class ListImagesResponse;

class ListImagesResponsePrivate : public EcrResponsePrivate {

public:

    explicit ListImagesResponsePrivate(ListImagesResponse * const q);

    void parseListImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagesResponse)
    Q_DISABLE_COPY(ListImagesResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

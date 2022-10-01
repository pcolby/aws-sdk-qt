// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPACKAGESRESPONSE_P_H
#define QTAWS_LISTIMAGEPACKAGESRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePackagesResponse;

class ListImagePackagesResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListImagePackagesResponsePrivate(ListImagePackagesResponse * const q);

    void parseListImagePackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagePackagesResponse)
    Q_DISABLE_COPY(ListImagePackagesResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

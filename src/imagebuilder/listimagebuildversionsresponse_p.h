// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEBUILDVERSIONSRESPONSE_P_H
#define QTAWS_LISTIMAGEBUILDVERSIONSRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageBuildVersionsResponse;

class ListImageBuildVersionsResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListImageBuildVersionsResponsePrivate(ListImageBuildVersionsResponse * const q);

    void parseListImageBuildVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImageBuildVersionsResponse)
    Q_DISABLE_COPY(ListImageBuildVersionsResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

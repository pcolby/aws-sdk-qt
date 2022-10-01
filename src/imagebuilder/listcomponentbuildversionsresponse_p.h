// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTBUILDVERSIONSRESPONSE_P_H
#define QTAWS_LISTCOMPONENTBUILDVERSIONSRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListComponentBuildVersionsResponse;

class ListComponentBuildVersionsResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListComponentBuildVersionsResponsePrivate(ListComponentBuildVersionsResponse * const q);

    void parseListComponentBuildVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentBuildVersionsResponse)
    Q_DISABLE_COPY(ListComponentBuildVersionsResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

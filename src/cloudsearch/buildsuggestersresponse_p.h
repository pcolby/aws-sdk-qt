// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDSUGGESTERSRESPONSE_P_H
#define QTAWS_BUILDSUGGESTERSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class BuildSuggestersResponse;

class BuildSuggestersResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit BuildSuggestersResponsePrivate(BuildSuggestersResponse * const q);

    void parseBuildSuggestersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BuildSuggestersResponse)
    Q_DISABLE_COPY(BuildSuggestersResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCURATEDENVIRONMENTIMAGESRESPONSE_P_H
#define QTAWS_LISTCURATEDENVIRONMENTIMAGESRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListCuratedEnvironmentImagesResponse;

class ListCuratedEnvironmentImagesResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListCuratedEnvironmentImagesResponsePrivate(ListCuratedEnvironmentImagesResponse * const q);

    void parseListCuratedEnvironmentImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCuratedEnvironmentImagesResponse)
    Q_DISABLE_COPY(ListCuratedEnvironmentImagesResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif

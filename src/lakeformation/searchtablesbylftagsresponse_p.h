// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESBYLFTAGSRESPONSE_P_H
#define QTAWS_SEARCHTABLESBYLFTAGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class SearchTablesByLFTagsResponse;

class SearchTablesByLFTagsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit SearchTablesByLFTagsResponsePrivate(SearchTablesByLFTagsResponse * const q);

    void parseSearchTablesByLFTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchTablesByLFTagsResponse)
    Q_DISABLE_COPY(SearchTablesByLFTagsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

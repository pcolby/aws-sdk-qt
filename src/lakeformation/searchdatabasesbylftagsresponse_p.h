// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDATABASESBYLFTAGSRESPONSE_P_H
#define QTAWS_SEARCHDATABASESBYLFTAGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class SearchDatabasesByLFTagsResponse;

class SearchDatabasesByLFTagsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit SearchDatabasesByLFTagsResponsePrivate(SearchDatabasesByLFTagsResponse * const q);

    void parseSearchDatabasesByLFTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchDatabasesByLFTagsResponse)
    Q_DISABLE_COPY(SearchDatabasesByLFTagsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLFTAGSRESPONSE_P_H
#define QTAWS_LISTLFTAGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class ListLFTagsResponse;

class ListLFTagsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit ListLFTagsResponsePrivate(ListLFTagsResponse * const q);

    void parseListLFTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLFTagsResponse)
    Q_DISABLE_COPY(ListLFTagsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

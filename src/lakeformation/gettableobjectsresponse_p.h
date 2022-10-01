// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEOBJECTSRESPONSE_P_H
#define QTAWS_GETTABLEOBJECTSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetTableObjectsResponse;

class GetTableObjectsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetTableObjectsResponsePrivate(GetTableObjectsResponse * const q);

    void parseGetTableObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTableObjectsResponse)
    Q_DISABLE_COPY(GetTableObjectsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

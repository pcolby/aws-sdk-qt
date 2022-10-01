// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEOBJECTSRESPONSE_P_H
#define QTAWS_UPDATETABLEOBJECTSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableObjectsResponse;

class UpdateTableObjectsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit UpdateTableObjectsResponsePrivate(UpdateTableObjectsResponse * const q);

    void parseUpdateTableObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTableObjectsResponse)
    Q_DISABLE_COPY(UpdateTableObjectsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

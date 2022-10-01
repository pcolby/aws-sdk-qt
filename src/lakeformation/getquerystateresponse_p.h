// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATERESPONSE_P_H
#define QTAWS_GETQUERYSTATERESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStateResponse;

class GetQueryStateResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetQueryStateResponsePrivate(GetQueryStateResponse * const q);

    void parseGetQueryStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryStateResponse)
    Q_DISABLE_COPY(GetQueryStateResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

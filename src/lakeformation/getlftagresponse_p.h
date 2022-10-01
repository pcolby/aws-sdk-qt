// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLFTAGRESPONSE_P_H
#define QTAWS_GETLFTAGRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetLFTagResponse;

class GetLFTagResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetLFTagResponsePrivate(GetLFTagResponse * const q);

    void parseGetLFTagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLFTagResponse)
    Q_DISABLE_COPY(GetLFTagResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

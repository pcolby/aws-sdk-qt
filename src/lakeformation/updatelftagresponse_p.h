// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELFTAGRESPONSE_P_H
#define QTAWS_UPDATELFTAGRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class UpdateLFTagResponse;

class UpdateLFTagResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit UpdateLFTagResponsePrivate(UpdateLFTagResponse * const q);

    void parseUpdateLFTagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLFTagResponse)
    Q_DISABLE_COPY(UpdateLFTagResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

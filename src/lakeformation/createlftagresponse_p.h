// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELFTAGRESPONSE_P_H
#define QTAWS_CREATELFTAGRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class CreateLFTagResponse;

class CreateLFTagResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit CreateLFTagResponsePrivate(CreateLFTagResponse * const q);

    void parseCreateLFTagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLFTagResponse)
    Q_DISABLE_COPY(CreateLFTagResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

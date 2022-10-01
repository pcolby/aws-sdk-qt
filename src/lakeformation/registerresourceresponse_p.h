// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRESOURCERESPONSE_P_H
#define QTAWS_REGISTERRESOURCERESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class RegisterResourceResponse;

class RegisterResourceResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit RegisterResourceResponsePrivate(RegisterResourceResponse * const q);

    void parseRegisterResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterResourceResponse)
    Q_DISABLE_COPY(RegisterResourceResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

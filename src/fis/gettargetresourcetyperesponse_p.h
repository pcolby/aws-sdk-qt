// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTARGETRESOURCETYPERESPONSE_P_H
#define QTAWS_GETTARGETRESOURCETYPERESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class GetTargetResourceTypeResponse;

class GetTargetResourceTypeResponsePrivate : public FisResponsePrivate {

public:

    explicit GetTargetResourceTypeResponsePrivate(GetTargetResourceTypeResponse * const q);

    void parseGetTargetResourceTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTargetResourceTypeResponse)
    Q_DISABLE_COPY(GetTargetResourceTypeResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

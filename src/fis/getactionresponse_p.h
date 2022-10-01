// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONRESPONSE_P_H
#define QTAWS_GETACTIONRESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class GetActionResponse;

class GetActionResponsePrivate : public FisResponsePrivate {

public:

    explicit GetActionResponsePrivate(GetActionResponse * const q);

    void parseGetActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetActionResponse)
    Q_DISABLE_COPY(GetActionResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

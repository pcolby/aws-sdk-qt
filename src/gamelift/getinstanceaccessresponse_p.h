// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSRESPONSE_P_H
#define QTAWS_GETINSTANCEACCESSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class GetInstanceAccessResponse;

class GetInstanceAccessResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit GetInstanceAccessResponsePrivate(GetInstanceAccessResponse * const q);

    void parseGetInstanceAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceAccessResponse)
    Q_DISABLE_COPY(GetInstanceAccessResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif

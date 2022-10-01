// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDSESSIONRESPONSE_P_H
#define QTAWS_GETTESTGRIDSESSIONRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridSessionResponse;

class GetTestGridSessionResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetTestGridSessionResponsePrivate(GetTestGridSessionResponse * const q);

    void parseGetTestGridSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTestGridSessionResponse)
    Q_DISABLE_COPY(GetTestGridSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

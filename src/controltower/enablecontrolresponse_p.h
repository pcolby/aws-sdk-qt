// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECONTROLRESPONSE_P_H
#define QTAWS_ENABLECONTROLRESPONSE_P_H

#include "controltowerresponse_p.h"

namespace QtAws {
namespace ControlTower {

class EnableControlResponse;

class EnableControlResponsePrivate : public ControlTowerResponsePrivate {

public:

    explicit EnableControlResponsePrivate(EnableControlResponse * const q);

    void parseEnableControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableControlResponse)
    Q_DISABLE_COPY(EnableControlResponsePrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECONTROLRESPONSE_P_H
#define QTAWS_DISABLECONTROLRESPONSE_P_H

#include "controltowerresponse_p.h"

namespace QtAws {
namespace ControlTower {

class DisableControlResponse;

class DisableControlResponsePrivate : public ControlTowerResponsePrivate {

public:

    explicit DisableControlResponsePrivate(DisableControlResponse * const q);

    void parseDisableControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableControlResponse)
    Q_DISABLE_COPY(DisableControlResponsePrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif

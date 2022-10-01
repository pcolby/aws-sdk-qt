// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLOPERATIONRESPONSE_P_H
#define QTAWS_GETCONTROLOPERATIONRESPONSE_P_H

#include "controltowerresponse_p.h"

namespace QtAws {
namespace ControlTower {

class GetControlOperationResponse;

class GetControlOperationResponsePrivate : public ControlTowerResponsePrivate {

public:

    explicit GetControlOperationResponsePrivate(GetControlOperationResponse * const q);

    void parseGetControlOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetControlOperationResponse)
    Q_DISABLE_COPY(GetControlOperationResponsePrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif

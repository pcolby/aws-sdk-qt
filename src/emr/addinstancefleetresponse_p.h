// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEFLEETRESPONSE_P_H
#define QTAWS_ADDINSTANCEFLEETRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class AddInstanceFleetResponse;

class AddInstanceFleetResponsePrivate : public EmrResponsePrivate {

public:

    explicit AddInstanceFleetResponsePrivate(AddInstanceFleetResponse * const q);

    void parseAddInstanceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddInstanceFleetResponse)
    Q_DISABLE_COPY(AddInstanceFleetResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

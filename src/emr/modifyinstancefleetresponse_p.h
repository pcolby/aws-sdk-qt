// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEFLEETRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEFLEETRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceFleetResponse;

class ModifyInstanceFleetResponsePrivate : public EmrResponsePrivate {

public:

    explicit ModifyInstanceFleetResponsePrivate(ModifyInstanceFleetResponse * const q);

    void parseModifyInstanceFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceFleetResponse)
    Q_DISABLE_COPY(ModifyInstanceFleetResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

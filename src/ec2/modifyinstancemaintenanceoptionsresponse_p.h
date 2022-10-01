// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMaintenanceOptionsResponse;

class ModifyInstanceMaintenanceOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceMaintenanceOptionsResponsePrivate(ModifyInstanceMaintenanceOptionsResponse * const q);

    void parseModifyInstanceMaintenanceOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceMaintenanceOptionsResponse)
    Q_DISABLE_COPY(ModifyInstanceMaintenanceOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTEQUIPMENTRESPONSE_P_H
#define QTAWS_LOOKOUTEQUIPMENTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentResponse;

class LookoutEquipmentResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LookoutEquipmentResponsePrivate(LookoutEquipmentResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookoutEquipmentResponse)
    Q_DISABLE_COPY(LookoutEquipmentResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif

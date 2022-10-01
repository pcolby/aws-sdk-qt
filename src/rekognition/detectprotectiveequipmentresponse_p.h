// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPROTECTIVEEQUIPMENTRESPONSE_P_H
#define QTAWS_DETECTPROTECTIVEEQUIPMENTRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DetectProtectiveEquipmentResponse;

class DetectProtectiveEquipmentResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DetectProtectiveEquipmentResponsePrivate(DetectProtectiveEquipmentResponse * const q);

    void parseDetectProtectiveEquipmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectProtectiveEquipmentResponse)
    Q_DISABLE_COPY(DetectProtectiveEquipmentResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

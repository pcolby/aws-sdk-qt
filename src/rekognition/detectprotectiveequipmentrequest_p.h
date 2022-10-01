// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPROTECTIVEEQUIPMENTREQUEST_P_H
#define QTAWS_DETECTPROTECTIVEEQUIPMENTREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "detectprotectiveequipmentrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectProtectiveEquipmentRequest;

class DetectProtectiveEquipmentRequestPrivate : public RekognitionRequestPrivate {

public:
    DetectProtectiveEquipmentRequestPrivate(const RekognitionRequest::Action action,
                                   DetectProtectiveEquipmentRequest * const q);
    DetectProtectiveEquipmentRequestPrivate(const DetectProtectiveEquipmentRequestPrivate &other,
                                   DetectProtectiveEquipmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectProtectiveEquipmentRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif

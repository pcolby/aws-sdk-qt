// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPROTECTIVEEQUIPMENTRESPONSE_H
#define QTAWS_DETECTPROTECTIVEEQUIPMENTRESPONSE_H

#include "rekognitionresponse.h"
#include "detectprotectiveequipmentrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectProtectiveEquipmentResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectProtectiveEquipmentResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectProtectiveEquipmentResponse(const DetectProtectiveEquipmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectProtectiveEquipmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectProtectiveEquipmentResponse)
    Q_DISABLE_COPY(DetectProtectiveEquipmentResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

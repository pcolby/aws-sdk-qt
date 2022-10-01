// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORMODELRESPONSE_H
#define QTAWS_UPDATEDETECTORMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "updatedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateDetectorModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT UpdateDetectorModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    UpdateDetectorModelResponse(const UpdateDetectorModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDetectorModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorModelResponse)
    Q_DISABLE_COPY(UpdateDetectorModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

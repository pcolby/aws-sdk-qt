// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORMODELRESPONSE_H
#define QTAWS_CREATEDETECTORMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "createdetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateDetectorModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT CreateDetectorModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    CreateDetectorModelResponse(const CreateDetectorModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDetectorModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorModelResponse)
    Q_DISABLE_COPY(CreateDetectorModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

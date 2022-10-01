// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORMODELRESPONSE_H
#define QTAWS_DELETEDETECTORMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "deletedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteDetectorModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT DeleteDetectorModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    DeleteDetectorModelResponse(const DeleteDetectorModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDetectorModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorModelResponse)
    Q_DISABLE_COPY(DeleteDetectorModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

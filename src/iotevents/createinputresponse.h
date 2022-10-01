// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTRESPONSE_H
#define QTAWS_CREATEINPUTRESPONSE_H

#include "ioteventsresponse.h"
#include "createinputrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateInputResponsePrivate;

class QTAWSIOTEVENTS_EXPORT CreateInputResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    CreateInputResponse(const CreateInputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInputResponse)
    Q_DISABLE_COPY(CreateInputResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

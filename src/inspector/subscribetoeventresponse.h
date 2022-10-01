// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOEVENTRESPONSE_H
#define QTAWS_SUBSCRIBETOEVENTRESPONSE_H

#include "inspectorresponse.h"
#include "subscribetoeventrequest.h"

namespace QtAws {
namespace Inspector {

class SubscribeToEventResponsePrivate;

class QTAWSINSPECTOR_EXPORT SubscribeToEventResponse : public InspectorResponse {
    Q_OBJECT

public:
    SubscribeToEventResponse(const SubscribeToEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubscribeToEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToEventResponse)
    Q_DISABLE_COPY(SubscribeToEventResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

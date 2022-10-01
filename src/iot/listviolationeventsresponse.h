// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIOLATIONEVENTSRESPONSE_H
#define QTAWS_LISTVIOLATIONEVENTSRESPONSE_H

#include "iotresponse.h"
#include "listviolationeventsrequest.h"

namespace QtAws {
namespace IoT {

class ListViolationEventsResponsePrivate;

class QTAWSIOT_EXPORT ListViolationEventsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListViolationEventsResponse(const ListViolationEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListViolationEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListViolationEventsResponse)
    Q_DISABLE_COPY(ListViolationEventsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

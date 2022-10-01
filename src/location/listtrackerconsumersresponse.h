// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERCONSUMERSRESPONSE_H
#define QTAWS_LISTTRACKERCONSUMERSRESPONSE_H

#include "locationresponse.h"
#include "listtrackerconsumersrequest.h"

namespace QtAws {
namespace Location {

class ListTrackerConsumersResponsePrivate;

class QTAWSLOCATION_EXPORT ListTrackerConsumersResponse : public LocationResponse {
    Q_OBJECT

public:
    ListTrackerConsumersResponse(const ListTrackerConsumersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrackerConsumersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrackerConsumersResponse)
    Q_DISABLE_COPY(ListTrackerConsumersResponse)

};

} // namespace Location
} // namespace QtAws

#endif

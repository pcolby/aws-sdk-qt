// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOURSOFOPERATIONSRESPONSE_H
#define QTAWS_LISTHOURSOFOPERATIONSRESPONSE_H

#include "connectresponse.h"
#include "listhoursofoperationsrequest.h"

namespace QtAws {
namespace Connect {

class ListHoursOfOperationsResponsePrivate;

class QTAWSCONNECT_EXPORT ListHoursOfOperationsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListHoursOfOperationsResponse(const ListHoursOfOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHoursOfOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHoursOfOperationsResponse)
    Q_DISABLE_COPY(ListHoursOfOperationsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

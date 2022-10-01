// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUOTATASKSRESPONSE_H
#define QTAWS_LISTFUOTATASKSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listfuotatasksrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListFuotaTasksResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListFuotaTasksResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListFuotaTasksResponse(const ListFuotaTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFuotaTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFuotaTasksResponse)
    Q_DISABLE_COPY(ListFuotaTasksResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

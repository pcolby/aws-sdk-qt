// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOTAUPDATESRESPONSE_H
#define QTAWS_LISTOTAUPDATESRESPONSE_H

#include "iotresponse.h"
#include "listotaupdatesrequest.h"

namespace QtAws {
namespace IoT {

class ListOTAUpdatesResponsePrivate;

class QTAWSIOT_EXPORT ListOTAUpdatesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListOTAUpdatesResponse(const ListOTAUpdatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOTAUpdatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOTAUpdatesResponse)
    Q_DISABLE_COPY(ListOTAUpdatesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

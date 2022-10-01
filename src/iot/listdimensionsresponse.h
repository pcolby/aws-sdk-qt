// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIMENSIONSRESPONSE_H
#define QTAWS_LISTDIMENSIONSRESPONSE_H

#include "iotresponse.h"
#include "listdimensionsrequest.h"

namespace QtAws {
namespace IoT {

class ListDimensionsResponsePrivate;

class QTAWSIOT_EXPORT ListDimensionsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListDimensionsResponse(const ListDimensionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDimensionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDimensionsResponse)
    Q_DISABLE_COPY(ListDimensionsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

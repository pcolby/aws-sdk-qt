// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDICESRESPONSE_H
#define QTAWS_LISTINDICESRESPONSE_H

#include "iotresponse.h"
#include "listindicesrequest.h"

namespace QtAws {
namespace IoT {

class ListIndicesResponsePrivate;

class QTAWSIOT_EXPORT ListIndicesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListIndicesResponse(const ListIndicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIndicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIndicesResponse)
    Q_DISABLE_COPY(ListIndicesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

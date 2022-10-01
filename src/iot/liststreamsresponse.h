// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSRESPONSE_H
#define QTAWS_LISTSTREAMSRESPONSE_H

#include "iotresponse.h"
#include "liststreamsrequest.h"

namespace QtAws {
namespace IoT {

class ListStreamsResponsePrivate;

class QTAWSIOT_EXPORT ListStreamsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListStreamsResponse(const ListStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamsResponse)
    Q_DISABLE_COPY(ListStreamsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

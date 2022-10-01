// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERCENTILESRESPONSE_H
#define QTAWS_GETPERCENTILESRESPONSE_H

#include "iotresponse.h"
#include "getpercentilesrequest.h"

namespace QtAws {
namespace IoT {

class GetPercentilesResponsePrivate;

class QTAWSIOT_EXPORT GetPercentilesResponse : public IoTResponse {
    Q_OBJECT

public:
    GetPercentilesResponse(const GetPercentilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPercentilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPercentilesResponse)
    Q_DISABLE_COPY(GetPercentilesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

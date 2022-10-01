// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCARDINALITYRESPONSE_H
#define QTAWS_GETCARDINALITYRESPONSE_H

#include "iotresponse.h"
#include "getcardinalityrequest.h"

namespace QtAws {
namespace IoT {

class GetCardinalityResponsePrivate;

class QTAWSIOT_EXPORT GetCardinalityResponse : public IoTResponse {
    Q_OBJECT

public:
    GetCardinalityResponse(const GetCardinalityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCardinalityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCardinalityResponse)
    Q_DISABLE_COPY(GetCardinalityResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

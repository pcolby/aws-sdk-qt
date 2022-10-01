// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTHINGPRINCIPALRESPONSE_H
#define QTAWS_DETACHTHINGPRINCIPALRESPONSE_H

#include "iotresponse.h"
#include "detachthingprincipalrequest.h"

namespace QtAws {
namespace IoT {

class DetachThingPrincipalResponsePrivate;

class QTAWSIOT_EXPORT DetachThingPrincipalResponse : public IoTResponse {
    Q_OBJECT

public:
    DetachThingPrincipalResponse(const DetachThingPrincipalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachThingPrincipalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachThingPrincipalResponse)
    Q_DISABLE_COPY(DetachThingPrincipalResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

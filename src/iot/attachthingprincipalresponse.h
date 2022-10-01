// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTHINGPRINCIPALRESPONSE_H
#define QTAWS_ATTACHTHINGPRINCIPALRESPONSE_H

#include "iotresponse.h"
#include "attachthingprincipalrequest.h"

namespace QtAws {
namespace IoT {

class AttachThingPrincipalResponsePrivate;

class QTAWSIOT_EXPORT AttachThingPrincipalResponse : public IoTResponse {
    Q_OBJECT

public:
    AttachThingPrincipalResponse(const AttachThingPrincipalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachThingPrincipalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachThingPrincipalResponse)
    Q_DISABLE_COPY(AttachThingPrincipalResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

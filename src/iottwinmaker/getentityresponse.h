// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYRESPONSE_H
#define QTAWS_GETENTITYRESPONSE_H

#include "iottwinmakerresponse.h"
#include "getentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetEntityResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetEntityResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetEntityResponse(const GetEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntityResponse)
    Q_DISABLE_COPY(GetEntityResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

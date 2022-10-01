// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILECONCURRENCYRESPONSE_H
#define QTAWS_UPDATEROUTINGPROFILECONCURRENCYRESPONSE_H

#include "connectresponse.h"
#include "updateroutingprofileconcurrencyrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileConcurrencyResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileConcurrencyResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateRoutingProfileConcurrencyResponse(const UpdateRoutingProfileConcurrencyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingProfileConcurrencyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileConcurrencyResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileConcurrencyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

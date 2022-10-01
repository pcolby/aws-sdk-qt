// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTUNNELSRESPONSE_H
#define QTAWS_LISTTUNNELSRESPONSE_H

#include "iotsecuretunnelingresponse.h"
#include "listtunnelsrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class ListTunnelsResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT ListTunnelsResponse : public IoTSecureTunnelingResponse {
    Q_OBJECT

public:
    ListTunnelsResponse(const ListTunnelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTunnelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTunnelsResponse)
    Q_DISABLE_COPY(ListTunnelsResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif

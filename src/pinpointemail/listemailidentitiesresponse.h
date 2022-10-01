// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILIDENTITIESRESPONSE_H
#define QTAWS_LISTEMAILIDENTITIESRESPONSE_H

#include "pinpointemailresponse.h"
#include "listemailidentitiesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListEmailIdentitiesResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListEmailIdentitiesResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    ListEmailIdentitiesResponse(const ListEmailIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEmailIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEmailIdentitiesResponse)
    Q_DISABLE_COPY(ListEmailIdentitiesResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

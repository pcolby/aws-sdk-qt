// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDRESPONSE_H
#define QTAWS_SETIDENTITYHEADERSINNOTIFICATIONSENABLEDRESPONSE_H

#include "sesresponse.h"
#include "setidentityheadersinnotificationsenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityHeadersInNotificationsEnabledResponsePrivate;

class QTAWSSES_EXPORT SetIdentityHeadersInNotificationsEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityHeadersInNotificationsEnabledResponse(const SetIdentityHeadersInNotificationsEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityHeadersInNotificationsEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityHeadersInNotificationsEnabledResponse)
    Q_DISABLE_COPY(SetIdentityHeadersInNotificationsEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

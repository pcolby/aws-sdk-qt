// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_H
#define QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_H

#include "sesresponse.h"
#include "setidentitynotificationtopicrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityNotificationTopicResponsePrivate;

class QTAWSSES_EXPORT SetIdentityNotificationTopicResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityNotificationTopicResponse(const SetIdentityNotificationTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityNotificationTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityNotificationTopicResponse)
    Q_DISABLE_COPY(SetIdentityNotificationTopicResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

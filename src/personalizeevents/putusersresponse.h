// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSRESPONSE_H
#define QTAWS_PUTUSERSRESPONSE_H

#include "personalizeeventsresponse.h"
#include "putusersrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutUsersResponsePrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PutUsersResponse : public PersonalizeEventsResponse {
    Q_OBJECT

public:
    PutUsersResponse(const PutUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUsersResponse)
    Q_DISABLE_COPY(PutUsersResponse)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif

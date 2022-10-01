// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSRESPONSE_P_H
#define QTAWS_PUTUSERSRESPONSE_P_H

#include "personalizeeventsresponse_p.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutUsersResponse;

class PutUsersResponsePrivate : public PersonalizeEventsResponsePrivate {

public:

    explicit PutUsersResponsePrivate(PutUsersResponse * const q);

    void parsePutUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutUsersResponse)
    Q_DISABLE_COPY(PutUsersResponsePrivate)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif

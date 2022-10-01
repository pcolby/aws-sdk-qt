// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMSRESPONSE_P_H
#define QTAWS_PUTITEMSRESPONSE_P_H

#include "personalizeeventsresponse_p.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutItemsResponse;

class PutItemsResponsePrivate : public PersonalizeEventsResponsePrivate {

public:

    explicit PutItemsResponsePrivate(PutItemsResponse * const q);

    void parsePutItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutItemsResponse)
    Q_DISABLE_COPY(PutItemsResponsePrivate)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif

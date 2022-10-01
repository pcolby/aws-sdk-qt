// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class CreateEventSubscriptionResponse;

class CreateEventSubscriptionResponsePrivate : public DocDbResponsePrivate {

public:

    explicit CreateEventSubscriptionResponsePrivate(CreateEventSubscriptionResponse * const q);

    void parseCreateEventSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventSubscriptionResponse)
    Q_DISABLE_COPY(CreateEventSubscriptionResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif

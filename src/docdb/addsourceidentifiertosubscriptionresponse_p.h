// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class AddSourceIdentifierToSubscriptionResponse;

class AddSourceIdentifierToSubscriptionResponsePrivate : public DocDbResponsePrivate {

public:

    explicit AddSourceIdentifierToSubscriptionResponsePrivate(AddSourceIdentifierToSubscriptionResponse * const q);

    void parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddSourceIdentifierToSubscriptionResponse)
    Q_DISABLE_COPY(AddSourceIdentifierToSubscriptionResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif

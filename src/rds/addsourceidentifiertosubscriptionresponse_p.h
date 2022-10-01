// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class AddSourceIdentifierToSubscriptionResponse;

class AddSourceIdentifierToSubscriptionResponsePrivate : public RdsResponsePrivate {

public:

    explicit AddSourceIdentifierToSubscriptionResponsePrivate(AddSourceIdentifierToSubscriptionResponse * const q);

    void parseAddSourceIdentifierToSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddSourceIdentifierToSubscriptionResponse)
    Q_DISABLE_COPY(AddSourceIdentifierToSubscriptionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

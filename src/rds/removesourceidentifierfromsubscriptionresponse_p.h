// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RemoveSourceIdentifierFromSubscriptionResponse;

class RemoveSourceIdentifierFromSubscriptionResponsePrivate : public RdsResponsePrivate {

public:

    explicit RemoveSourceIdentifierFromSubscriptionResponsePrivate(RemoveSourceIdentifierFromSubscriptionResponse * const q);

    void parseRemoveSourceIdentifierFromSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveSourceIdentifierFromSubscriptionResponse)
    Q_DISABLE_COPY(RemoveSourceIdentifierFromSubscriptionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class RemoveSourceIdentifierFromSubscriptionResponse;

class RemoveSourceIdentifierFromSubscriptionResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit RemoveSourceIdentifierFromSubscriptionResponsePrivate(RemoveSourceIdentifierFromSubscriptionResponse * const q);

    void parseRemoveSourceIdentifierFromSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveSourceIdentifierFromSubscriptionResponse)
    Q_DISABLE_COPY(RemoveSourceIdentifierFromSubscriptionResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif

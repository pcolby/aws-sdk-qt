// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteEventSubscriptionResponse;

class DeleteEventSubscriptionResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteEventSubscriptionResponsePrivate(DeleteEventSubscriptionResponse * const q);

    void parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventSubscriptionResponse)
    Q_DISABLE_COPY(DeleteEventSubscriptionResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif

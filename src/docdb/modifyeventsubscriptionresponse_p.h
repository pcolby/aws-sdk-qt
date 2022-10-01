// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class ModifyEventSubscriptionResponse;

class ModifyEventSubscriptionResponsePrivate : public DocDbResponsePrivate {

public:

    explicit ModifyEventSubscriptionResponsePrivate(ModifyEventSubscriptionResponse * const q);

    void parseModifyEventSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyEventSubscriptionResponse)
    Q_DISABLE_COPY(ModifyEventSubscriptionResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif

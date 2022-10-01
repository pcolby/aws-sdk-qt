// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEventSubscriptionResponse;

class DeleteEventSubscriptionResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteEventSubscriptionResponsePrivate(DeleteEventSubscriptionResponse * const q);

    void parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventSubscriptionResponse)
    Q_DISABLE_COPY(DeleteEventSubscriptionResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

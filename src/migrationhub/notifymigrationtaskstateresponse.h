// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYMIGRATIONTASKSTATERESPONSE_H
#define QTAWS_NOTIFYMIGRATIONTASKSTATERESPONSE_H

#include "migrationhubresponse.h"
#include "notifymigrationtaskstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyMigrationTaskStateResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT NotifyMigrationTaskStateResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    NotifyMigrationTaskStateResponse(const NotifyMigrationTaskStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyMigrationTaskStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyMigrationTaskStateResponse)
    Q_DISABLE_COPY(NotifyMigrationTaskStateResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif

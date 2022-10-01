// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPLICATIONSTATERESPONSE_H
#define QTAWS_NOTIFYAPPLICATIONSTATERESPONSE_H

#include "migrationhubresponse.h"
#include "notifyapplicationstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyApplicationStateResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT NotifyApplicationStateResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    NotifyApplicationStateResponse(const NotifyApplicationStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyApplicationStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyApplicationStateResponse)
    Q_DISABLE_COPY(NotifyApplicationStateResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif

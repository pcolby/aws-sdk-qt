// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETADVISORCOLLECTORRESPONSE_H
#define QTAWS_CREATEFLEETADVISORCOLLECTORRESPONSE_H

#include "databasemigrationresponse.h"
#include "createfleetadvisorcollectorrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateFleetAdvisorCollectorResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateFleetAdvisorCollectorResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    CreateFleetAdvisorCollectorResponse(const CreateFleetAdvisorCollectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFleetAdvisorCollectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetAdvisorCollectorResponse)
    Q_DISABLE_COPY(CreateFleetAdvisorCollectorResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

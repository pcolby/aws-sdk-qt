// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORCOLLECTORRESPONSE_H
#define QTAWS_DELETEFLEETADVISORCOLLECTORRESPONSE_H

#include "databasemigrationresponse.h"
#include "deletefleetadvisorcollectorrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorCollectorResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteFleetAdvisorCollectorResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteFleetAdvisorCollectorResponse(const DeleteFleetAdvisorCollectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetAdvisorCollectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetAdvisorCollectorResponse)
    Q_DISABLE_COPY(DeleteFleetAdvisorCollectorResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTREPLICATIONINSTANCERESPONSE_H
#define QTAWS_REBOOTREPLICATIONINSTANCERESPONSE_H

#include "databasemigrationresponse.h"
#include "rebootreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RebootReplicationInstanceResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT RebootReplicationInstanceResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    RebootReplicationInstanceResponse(const RebootReplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootReplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootReplicationInstanceResponse)
    Q_DISABLE_COPY(RebootReplicationInstanceResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

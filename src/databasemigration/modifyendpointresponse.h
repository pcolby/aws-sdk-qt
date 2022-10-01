// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTRESPONSE_H
#define QTAWS_MODIFYENDPOINTRESPONSE_H

#include "databasemigrationresponse.h"
#include "modifyendpointrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyEndpointResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyEndpointResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ModifyEndpointResponse(const ModifyEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEndpointResponse)
    Q_DISABLE_COPY(ModifyEndpointResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

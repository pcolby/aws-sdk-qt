// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMACREATIONRESPONSE_H
#define QTAWS_STARTSCHEMACREATIONRESPONSE_H

#include "appsyncresponse.h"
#include "startschemacreationrequest.h"

namespace QtAws {
namespace AppSync {

class StartSchemaCreationResponsePrivate;

class QTAWSAPPSYNC_EXPORT StartSchemaCreationResponse : public AppSyncResponse {
    Q_OBJECT

public:
    StartSchemaCreationResponse(const StartSchemaCreationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSchemaCreationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSchemaCreationResponse)
    Q_DISABLE_COPY(StartSchemaCreationResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif

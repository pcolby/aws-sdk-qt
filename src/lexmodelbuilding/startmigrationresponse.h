// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMIGRATIONRESPONSE_H
#define QTAWS_STARTMIGRATIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "startmigrationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class StartMigrationResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT StartMigrationResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    StartMigrationResponse(const StartMigrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMigrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMigrationResponse)
    Q_DISABLE_COPY(StartMigrationResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

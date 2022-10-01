// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONRESPONSE_H
#define QTAWS_GETMIGRATIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getmigrationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetMigrationResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetMigrationResponse(const GetMigrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMigrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMigrationResponse)
    Q_DISABLE_COPY(GetMigrationResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

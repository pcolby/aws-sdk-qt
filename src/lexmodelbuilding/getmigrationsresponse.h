// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONSRESPONSE_H
#define QTAWS_GETMIGRATIONSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getmigrationsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetMigrationsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetMigrationsResponse(const GetMigrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMigrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMigrationsResponse)
    Q_DISABLE_COPY(GetMigrationsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif

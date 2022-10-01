// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEPARAMETERSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASEPARAMETERSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaseparametersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseParametersResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseParametersResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseParametersResponse(const GetRelationalDatabaseParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseParametersResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseParametersResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

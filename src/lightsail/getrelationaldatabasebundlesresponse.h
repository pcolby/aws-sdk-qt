// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBUNDLESRESPONSE_H
#define QTAWS_GETRELATIONALDATABASEBUNDLESRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasebundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBundlesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseBundlesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseBundlesResponse(const GetRelationalDatabaseBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseBundlesResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseBundlesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

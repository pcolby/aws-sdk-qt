// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDRESPONSE_H
#define QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasemasteruserpasswordrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMasterUserPasswordResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseMasterUserPasswordResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseMasterUserPasswordResponse(const GetRelationalDatabaseMasterUserPasswordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseMasterUserPasswordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseMasterUserPasswordResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseMasterUserPasswordResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

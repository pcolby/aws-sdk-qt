// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSWITHIAMRESPONSE_H
#define QTAWS_GETCLUSTERCREDENTIALSWITHIAMRESPONSE_H

#include "redshiftresponse.h"
#include "getclustercredentialswithiamrequest.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsWithIAMResponsePrivate;

class QTAWSREDSHIFT_EXPORT GetClusterCredentialsWithIAMResponse : public RedshiftResponse {
    Q_OBJECT

public:
    GetClusterCredentialsWithIAMResponse(const GetClusterCredentialsWithIAMRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClusterCredentialsWithIAMRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClusterCredentialsWithIAMResponse)
    Q_DISABLE_COPY(GetClusterCredentialsWithIAMResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

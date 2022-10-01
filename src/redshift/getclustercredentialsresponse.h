// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSRESPONSE_H
#define QTAWS_GETCLUSTERCREDENTIALSRESPONSE_H

#include "redshiftresponse.h"
#include "getclustercredentialsrequest.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsResponsePrivate;

class QTAWSREDSHIFT_EXPORT GetClusterCredentialsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    GetClusterCredentialsResponse(const GetClusterCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClusterCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClusterCredentialsResponse)
    Q_DISABLE_COPY(GetClusterCredentialsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

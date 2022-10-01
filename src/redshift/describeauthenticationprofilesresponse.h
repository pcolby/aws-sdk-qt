// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHENTICATIONPROFILESRESPONSE_H
#define QTAWS_DESCRIBEAUTHENTICATIONPROFILESRESPONSE_H

#include "redshiftresponse.h"
#include "describeauthenticationprofilesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeAuthenticationProfilesResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeAuthenticationProfilesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeAuthenticationProfilesResponse(const DescribeAuthenticationProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuthenticationProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuthenticationProfilesResponse)
    Q_DISABLE_COPY(DescribeAuthenticationProfilesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif

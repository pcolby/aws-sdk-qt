// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHENTICATIONPROFILESREQUEST_H
#define QTAWS_DESCRIBEAUTHENTICATIONPROFILESREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeAuthenticationProfilesRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeAuthenticationProfilesRequest : public RedshiftRequest {

public:
    DescribeAuthenticationProfilesRequest(const DescribeAuthenticationProfilesRequest &other);
    DescribeAuthenticationProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuthenticationProfilesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

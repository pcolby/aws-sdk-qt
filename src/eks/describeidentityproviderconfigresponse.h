// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGRESPONSE_H

#include "eksresponse.h"
#include "describeidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class DescribeIdentityProviderConfigResponsePrivate;

class QTAWSEKS_EXPORT DescribeIdentityProviderConfigResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeIdentityProviderConfigResponse(const DescribeIdentityProviderConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityProviderConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderConfigResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif

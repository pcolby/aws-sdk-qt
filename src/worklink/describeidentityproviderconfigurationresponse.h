// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "describeidentityproviderconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeIdentityProviderConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeIdentityProviderConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeIdentityProviderConfigurationResponse(const DescribeIdentityProviderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityProviderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderConfigurationResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif

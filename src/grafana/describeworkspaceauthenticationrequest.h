// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONREQUEST_H
#define QTAWS_DESCRIBEWORKSPACEAUTHENTICATIONREQUEST_H

#include "grafanarequest.h"

namespace QtAws {
namespace Grafana {

class DescribeWorkspaceAuthenticationRequestPrivate;

class QTAWSGRAFANA_EXPORT DescribeWorkspaceAuthenticationRequest : public GrafanaRequest {

public:
    DescribeWorkspaceAuthenticationRequest(const DescribeWorkspaceAuthenticationRequest &other);
    DescribeWorkspaceAuthenticationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceAuthenticationRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif

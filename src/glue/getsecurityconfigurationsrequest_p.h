// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONSREQUEST_P_H
#define QTAWS_GETSECURITYCONFIGURATIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "getsecurityconfigurationsrequest.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationsRequest;

class GetSecurityConfigurationsRequestPrivate : public GlueRequestPrivate {

public:
    GetSecurityConfigurationsRequestPrivate(const GlueRequest::Action action,
                                   GetSecurityConfigurationsRequest * const q);
    GetSecurityConfigurationsRequestPrivate(const GetSecurityConfigurationsRequestPrivate &other,
                                   GetSecurityConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSecurityConfigurationsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

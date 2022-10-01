// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTSECURITYCONFIGURATIONSREQUEST_P_H

#include "emrrequest_p.h"
#include "listsecurityconfigurationsrequest.h"

namespace QtAws {
namespace Emr {

class ListSecurityConfigurationsRequest;

class ListSecurityConfigurationsRequestPrivate : public EmrRequestPrivate {

public:
    ListSecurityConfigurationsRequestPrivate(const EmrRequest::Action action,
                                   ListSecurityConfigurationsRequest * const q);
    ListSecurityConfigurationsRequestPrivate(const ListSecurityConfigurationsRequestPrivate &other,
                                   ListSecurityConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityConfigurationsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

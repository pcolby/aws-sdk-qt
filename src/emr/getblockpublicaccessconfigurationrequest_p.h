// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONREQUEST_P_H
#define QTAWS_GETBLOCKPUBLICACCESSCONFIGURATIONREQUEST_P_H

#include "emrrequest_p.h"
#include "getblockpublicaccessconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class GetBlockPublicAccessConfigurationRequest;

class GetBlockPublicAccessConfigurationRequestPrivate : public EmrRequestPrivate {

public:
    GetBlockPublicAccessConfigurationRequestPrivate(const EmrRequest::Action action,
                                   GetBlockPublicAccessConfigurationRequest * const q);
    GetBlockPublicAccessConfigurationRequestPrivate(const GetBlockPublicAccessConfigurationRequestPrivate &other,
                                   GetBlockPublicAccessConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlockPublicAccessConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

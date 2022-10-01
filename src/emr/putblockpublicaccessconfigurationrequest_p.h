// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONREQUEST_P_H

#include "emrrequest_p.h"
#include "putblockpublicaccessconfigurationrequest.h"

namespace QtAws {
namespace Emr {

class PutBlockPublicAccessConfigurationRequest;

class PutBlockPublicAccessConfigurationRequestPrivate : public EmrRequestPrivate {

public:
    PutBlockPublicAccessConfigurationRequestPrivate(const EmrRequest::Action action,
                                   PutBlockPublicAccessConfigurationRequest * const q);
    PutBlockPublicAccessConfigurationRequestPrivate(const PutBlockPublicAccessConfigurationRequestPrivate &other,
                                   PutBlockPublicAccessConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBlockPublicAccessConfigurationRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTACCESSREQUEST_P_H
#define QTAWS_MODIFYENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyEndpointAccessRequest;

class ModifyEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyEndpointAccessRequest * const q);
    ModifyEndpointAccessRequestPrivate(const ModifyEndpointAccessRequestPrivate &other,
                                   ModifyEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

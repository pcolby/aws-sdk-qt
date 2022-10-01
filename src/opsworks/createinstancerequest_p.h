// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEREQUEST_P_H
#define QTAWS_CREATEINSTANCEREQUEST_P_H

#include "opsworksrequest_p.h"
#include "createinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateInstanceRequest;

class CreateInstanceRequestPrivate : public OpsWorksRequestPrivate {

public:
    CreateInstanceRequestPrivate(const OpsWorksRequest::Action action,
                                   CreateInstanceRequest * const q);
    CreateInstanceRequestPrivate(const CreateInstanceRequestPrivate &other,
                                   CreateInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

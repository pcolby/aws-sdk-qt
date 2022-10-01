// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTREQUEST_P_H
#define QTAWS_CREATEACCESSPOINTREQUEST_P_H

#include "efsrequest_p.h"
#include "createaccesspointrequest.h"

namespace QtAws {
namespace Efs {

class CreateAccessPointRequest;

class CreateAccessPointRequestPrivate : public EfsRequestPrivate {

public:
    CreateAccessPointRequestPrivate(const EfsRequest::Action action,
                                   CreateAccessPointRequest * const q);
    CreateAccessPointRequestPrivate(const CreateAccessPointRequestPrivate &other,
                                   CreateAccessPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessPointRequest)

};

} // namespace Efs
} // namespace QtAws

#endif

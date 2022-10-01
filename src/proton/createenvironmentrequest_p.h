// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "createenvironmentrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentRequest;

class CreateEnvironmentRequestPrivate : public ProtonRequestPrivate {

public:
    CreateEnvironmentRequestPrivate(const ProtonRequest::Action action,
                                   CreateEnvironmentRequest * const q);
    CreateEnvironmentRequestPrivate(const CreateEnvironmentRequestPrivate &other,
                                   CreateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

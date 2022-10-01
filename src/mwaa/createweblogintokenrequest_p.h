// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBLOGINTOKENREQUEST_P_H
#define QTAWS_CREATEWEBLOGINTOKENREQUEST_P_H

#include "mwaarequest_p.h"
#include "createweblogintokenrequest.h"

namespace QtAws {
namespace Mwaa {

class CreateWebLoginTokenRequest;

class CreateWebLoginTokenRequestPrivate : public MwaaRequestPrivate {

public:
    CreateWebLoginTokenRequestPrivate(const MwaaRequest::Action action,
                                   CreateWebLoginTokenRequest * const q);
    CreateWebLoginTokenRequestPrivate(const CreateWebLoginTokenRequestPrivate &other,
                                   CreateWebLoginTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWebLoginTokenRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLITOKENREQUEST_P_H
#define QTAWS_CREATECLITOKENREQUEST_P_H

#include "mwaarequest_p.h"
#include "createclitokenrequest.h"

namespace QtAws {
namespace Mwaa {

class CreateCliTokenRequest;

class CreateCliTokenRequestPrivate : public MwaaRequestPrivate {

public:
    CreateCliTokenRequestPrivate(const MwaaRequest::Action action,
                                   CreateCliTokenRequest * const q);
    CreateCliTokenRequestPrivate(const CreateCliTokenRequestPrivate &other,
                                   CreateCliTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCliTokenRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif

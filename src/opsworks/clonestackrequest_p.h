// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONESTACKREQUEST_P_H
#define QTAWS_CLONESTACKREQUEST_P_H

#include "opsworksrequest_p.h"
#include "clonestackrequest.h"

namespace QtAws {
namespace OpsWorks {

class CloneStackRequest;

class CloneStackRequestPrivate : public OpsWorksRequestPrivate {

public:
    CloneStackRequestPrivate(const OpsWorksRequest::Action action,
                                   CloneStackRequest * const q);
    CloneStackRequestPrivate(const CloneStackRequestPrivate &other,
                                   CloneStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloneStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

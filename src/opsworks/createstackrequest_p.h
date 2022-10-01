// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKREQUEST_P_H
#define QTAWS_CREATESTACKREQUEST_P_H

#include "opsworksrequest_p.h"
#include "createstackrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateStackRequest;

class CreateStackRequestPrivate : public OpsWorksRequestPrivate {

public:
    CreateStackRequestPrivate(const OpsWorksRequest::Action action,
                                   CreateStackRequest * const q);
    CreateStackRequestPrivate(const CreateStackRequestPrivate &other,
                                   CreateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTOUTPUTSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTOUTPUTSREQUEST_P_H

#include "protonrequest_p.h"
#include "listenvironmentoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentOutputsRequest;

class ListEnvironmentOutputsRequestPrivate : public ProtonRequestPrivate {

public:
    ListEnvironmentOutputsRequestPrivate(const ProtonRequest::Action action,
                                   ListEnvironmentOutputsRequest * const q);
    ListEnvironmentOutputsRequestPrivate(const ListEnvironmentOutputsRequestPrivate &other,
                                   ListEnvironmentOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATESREQUEST_P_H
#define QTAWS_LISTENVIRONMENTTEMPLATESREQUEST_P_H

#include "protonrequest_p.h"
#include "listenvironmenttemplatesrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplatesRequest;

class ListEnvironmentTemplatesRequestPrivate : public ProtonRequestPrivate {

public:
    ListEnvironmentTemplatesRequestPrivate(const ProtonRequest::Action action,
                                   ListEnvironmentTemplatesRequest * const q);
    ListEnvironmentTemplatesRequestPrivate(const ListEnvironmentTemplatesRequestPrivate &other,
                                   ListEnvironmentTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentTemplatesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

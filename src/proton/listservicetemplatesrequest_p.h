// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATESREQUEST_P_H
#define QTAWS_LISTSERVICETEMPLATESREQUEST_P_H

#include "protonrequest_p.h"
#include "listservicetemplatesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplatesRequest;

class ListServiceTemplatesRequestPrivate : public ProtonRequestPrivate {

public:
    ListServiceTemplatesRequestPrivate(const ProtonRequest::Action action,
                                   ListServiceTemplatesRequest * const q);
    ListServiceTemplatesRequestPrivate(const ListServiceTemplatesRequestPrivate &other,
                                   ListServiceTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceTemplatesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMASREQUEST_P_H
#define QTAWS_LISTSCHEMASREQUEST_P_H

#include "personalizerequest_p.h"
#include "listschemasrequest.h"

namespace QtAws {
namespace Personalize {

class ListSchemasRequest;

class ListSchemasRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListSchemasRequestPrivate(const PersonalizeRequest::Action action,
                                   ListSchemasRequest * const q);
    ListSchemasRequestPrivate(const ListSchemasRequestPrivate &other,
                                   ListSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchemasRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

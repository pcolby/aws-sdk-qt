// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMENTITYTYPESREQUEST_P_H
#define QTAWS_LISTCUSTOMENTITYTYPESREQUEST_P_H

#include "gluerequest_p.h"
#include "listcustomentitytypesrequest.h"

namespace QtAws {
namespace Glue {

class ListCustomEntityTypesRequest;

class ListCustomEntityTypesRequestPrivate : public GlueRequestPrivate {

public:
    ListCustomEntityTypesRequestPrivate(const GlueRequest::Action action,
                                   ListCustomEntityTypesRequest * const q);
    ListCustomEntityTypesRequestPrivate(const ListCustomEntityTypesRequestPrivate &other,
                                   ListCustomEntityTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomEntityTypesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

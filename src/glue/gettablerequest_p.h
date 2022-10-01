// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEREQUEST_P_H
#define QTAWS_GETTABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "gettablerequest.h"

namespace QtAws {
namespace Glue {

class GetTableRequest;

class GetTableRequestPrivate : public GlueRequestPrivate {

public:
    GetTableRequestPrivate(const GlueRequest::Action action,
                                   GetTableRequest * const q);
    GetTableRequestPrivate(const GetTableRequestPrivate &other,
                                   GetTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

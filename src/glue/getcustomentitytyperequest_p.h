// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMENTITYTYPEREQUEST_P_H
#define QTAWS_GETCUSTOMENTITYTYPEREQUEST_P_H

#include "gluerequest_p.h"
#include "getcustomentitytyperequest.h"

namespace QtAws {
namespace Glue {

class GetCustomEntityTypeRequest;

class GetCustomEntityTypeRequestPrivate : public GlueRequestPrivate {

public:
    GetCustomEntityTypeRequestPrivate(const GlueRequest::Action action,
                                   GetCustomEntityTypeRequest * const q);
    GetCustomEntityTypeRequestPrivate(const GetCustomEntityTypeRequestPrivate &other,
                                   GetCustomEntityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCustomEntityTypeRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

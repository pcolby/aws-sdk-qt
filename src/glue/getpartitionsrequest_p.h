// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONSREQUEST_P_H
#define QTAWS_GETPARTITIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "getpartitionsrequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionsRequest;

class GetPartitionsRequestPrivate : public GlueRequestPrivate {

public:
    GetPartitionsRequestPrivate(const GlueRequest::Action action,
                                   GetPartitionsRequest * const q);
    GetPartitionsRequestPrivate(const GetPartitionsRequestPrivate &other,
                                   GetPartitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPartitionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

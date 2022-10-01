// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONREQUEST_P_H
#define QTAWS_GETPARTITIONREQUEST_P_H

#include "gluerequest_p.h"
#include "getpartitionrequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionRequest;

class GetPartitionRequestPrivate : public GlueRequestPrivate {

public:
    GetPartitionRequestPrivate(const GlueRequest::Action action,
                                   GetPartitionRequest * const q);
    GetPartitionRequestPrivate(const GetPartitionRequestPrivate &other,
                                   GetPartitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

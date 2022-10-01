// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWGRAPHREQUEST_P_H
#define QTAWS_GETDATAFLOWGRAPHREQUEST_P_H

#include "gluerequest_p.h"
#include "getdataflowgraphrequest.h"

namespace QtAws {
namespace Glue {

class GetDataflowGraphRequest;

class GetDataflowGraphRequestPrivate : public GlueRequestPrivate {

public:
    GetDataflowGraphRequestPrivate(const GlueRequest::Action action,
                                   GetDataflowGraphRequest * const q);
    GetDataflowGraphRequestPrivate(const GetDataflowGraphRequestPrivate &other,
                                   GetDataflowGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataflowGraphRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

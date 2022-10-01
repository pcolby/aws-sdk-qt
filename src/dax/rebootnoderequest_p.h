// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTNODEREQUEST_P_H
#define QTAWS_REBOOTNODEREQUEST_P_H

#include "daxrequest_p.h"
#include "rebootnoderequest.h"

namespace QtAws {
namespace Dax {

class RebootNodeRequest;

class RebootNodeRequestPrivate : public DaxRequestPrivate {

public:
    RebootNodeRequestPrivate(const DaxRequest::Action action,
                                   RebootNodeRequest * const q);
    RebootNodeRequestPrivate(const RebootNodeRequestPrivate &other,
                                   RebootNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootNodeRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

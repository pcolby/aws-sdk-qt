// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZECUTOVERREQUEST_P_H
#define QTAWS_FINALIZECUTOVERREQUEST_P_H

#include "mgnrequest_p.h"
#include "finalizecutoverrequest.h"

namespace QtAws {
namespace Mgn {

class FinalizeCutoverRequest;

class FinalizeCutoverRequestPrivate : public MgnRequestPrivate {

public:
    FinalizeCutoverRequestPrivate(const MgnRequest::Action action,
                                   FinalizeCutoverRequest * const q);
    FinalizeCutoverRequestPrivate(const FinalizeCutoverRequestPrivate &other,
                                   FinalizeCutoverRequest * const q);

private:
    Q_DECLARE_PUBLIC(FinalizeCutoverRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

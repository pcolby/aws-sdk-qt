// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICATIONFACTORREQUEST_P_H
#define QTAWS_DECREASEREPLICATIONFACTORREQUEST_P_H

#include "daxrequest_p.h"
#include "decreasereplicationfactorrequest.h"

namespace QtAws {
namespace Dax {

class DecreaseReplicationFactorRequest;

class DecreaseReplicationFactorRequestPrivate : public DaxRequestPrivate {

public:
    DecreaseReplicationFactorRequestPrivate(const DaxRequest::Action action,
                                   DecreaseReplicationFactorRequest * const q);
    DecreaseReplicationFactorRequestPrivate(const DecreaseReplicationFactorRequestPrivate &other,
                                   DecreaseReplicationFactorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecreaseReplicationFactorRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

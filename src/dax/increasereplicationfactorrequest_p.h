// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICATIONFACTORREQUEST_P_H
#define QTAWS_INCREASEREPLICATIONFACTORREQUEST_P_H

#include "daxrequest_p.h"
#include "increasereplicationfactorrequest.h"

namespace QtAws {
namespace Dax {

class IncreaseReplicationFactorRequest;

class IncreaseReplicationFactorRequestPrivate : public DaxRequestPrivate {

public:
    IncreaseReplicationFactorRequestPrivate(const DaxRequest::Action action,
                                   IncreaseReplicationFactorRequest * const q);
    IncreaseReplicationFactorRequestPrivate(const IncreaseReplicationFactorRequestPrivate &other,
                                   IncreaseReplicationFactorRequest * const q);

private:
    Q_DECLARE_PUBLIC(IncreaseReplicationFactorRequest)

};

} // namespace Dax
} // namespace QtAws

#endif

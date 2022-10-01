// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVENTORYREQUEST_P_H
#define QTAWS_PUTINVENTORYREQUEST_P_H

#include "ssmrequest_p.h"
#include "putinventoryrequest.h"

namespace QtAws {
namespace Ssm {

class PutInventoryRequest;

class PutInventoryRequestPrivate : public SsmRequestPrivate {

public:
    PutInventoryRequestPrivate(const SsmRequest::Action action,
                                   PutInventoryRequest * const q);
    PutInventoryRequestPrivate(const PutInventoryRequestPrivate &other,
                                   PutInventoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

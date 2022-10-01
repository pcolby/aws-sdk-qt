// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERJOBDEFINITIONREQUEST_P_H
#define QTAWS_DEREGISTERJOBDEFINITIONREQUEST_P_H

#include "batchrequest_p.h"
#include "deregisterjobdefinitionrequest.h"

namespace QtAws {
namespace Batch {

class DeregisterJobDefinitionRequest;

class DeregisterJobDefinitionRequestPrivate : public BatchRequestPrivate {

public:
    DeregisterJobDefinitionRequestPrivate(const BatchRequest::Action action,
                                   DeregisterJobDefinitionRequest * const q);
    DeregisterJobDefinitionRequestPrivate(const DeregisterJobDefinitionRequestPrivate &other,
                                   DeregisterJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterJobDefinitionRequest)

};

} // namespace Batch
} // namespace QtAws

#endif

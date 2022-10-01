// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERJOBDEFINITIONREQUEST_P_H
#define QTAWS_REGISTERJOBDEFINITIONREQUEST_P_H

#include "batchrequest_p.h"
#include "registerjobdefinitionrequest.h"

namespace QtAws {
namespace Batch {

class RegisterJobDefinitionRequest;

class RegisterJobDefinitionRequestPrivate : public BatchRequestPrivate {

public:
    RegisterJobDefinitionRequestPrivate(const BatchRequest::Action action,
                                   RegisterJobDefinitionRequest * const q);
    RegisterJobDefinitionRequestPrivate(const RegisterJobDefinitionRequestPrivate &other,
                                   RegisterJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterJobDefinitionRequest)

};

} // namespace Batch
} // namespace QtAws

#endif

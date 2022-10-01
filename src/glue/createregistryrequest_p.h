// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYREQUEST_P_H
#define QTAWS_CREATEREGISTRYREQUEST_P_H

#include "gluerequest_p.h"
#include "createregistryrequest.h"

namespace QtAws {
namespace Glue {

class CreateRegistryRequest;

class CreateRegistryRequestPrivate : public GlueRequestPrivate {

public:
    CreateRegistryRequestPrivate(const GlueRequest::Action action,
                                   CreateRegistryRequest * const q);
    CreateRegistryRequestPrivate(const CreateRegistryRequestPrivate &other,
                                   CreateRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

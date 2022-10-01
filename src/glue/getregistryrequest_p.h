// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYREQUEST_P_H
#define QTAWS_GETREGISTRYREQUEST_P_H

#include "gluerequest_p.h"
#include "getregistryrequest.h"

namespace QtAws {
namespace Glue {

class GetRegistryRequest;

class GetRegistryRequestPrivate : public GlueRequestPrivate {

public:
    GetRegistryRequestPrivate(const GlueRequest::Action action,
                                   GetRegistryRequest * const q);
    GetRegistryRequestPrivate(const GetRegistryRequestPrivate &other,
                                   GetRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPPINGREQUEST_P_H
#define QTAWS_GETMAPPINGREQUEST_P_H

#include "gluerequest_p.h"
#include "getmappingrequest.h"

namespace QtAws {
namespace Glue {

class GetMappingRequest;

class GetMappingRequestPrivate : public GlueRequestPrivate {

public:
    GetMappingRequestPrivate(const GlueRequest::Action action,
                                   GetMappingRequest * const q);
    GetMappingRequestPrivate(const GetMappingRequestPrivate &other,
                                   GetMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMappingRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

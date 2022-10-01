// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONREQUEST_P_H
#define QTAWS_GETCONNECTIONREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "getconnectionrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class GetConnectionRequest;

class GetConnectionRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    GetConnectionRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   GetConnectionRequest * const q);
    GetConnectionRequestPrivate(const GetConnectionRequestPrivate &other,
                                   GetConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectionRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

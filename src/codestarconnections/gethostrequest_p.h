// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTREQUEST_P_H
#define QTAWS_GETHOSTREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "gethostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class GetHostRequest;

class GetHostRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    GetHostRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   GetHostRequest * const q);
    GetHostRequestPrivate(const GetHostRequestPrivate &other,
                                   GetHostRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

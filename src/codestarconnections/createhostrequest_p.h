// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTREQUEST_P_H
#define QTAWS_CREATEHOSTREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "createhostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateHostRequest;

class CreateHostRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    CreateHostRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   CreateHostRequest * const q);
    CreateHostRequestPrivate(const CreateHostRequestPrivate &other,
                                   CreateHostRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

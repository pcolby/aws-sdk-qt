// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_P_H
#define QTAWS_CREATECONNECTIONREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateConnectionRequest;

class CreateConnectionRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    CreateConnectionRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   CreateConnectionRequest * const q);
    CreateConnectionRequestPrivate(const CreateConnectionRequestPrivate &other,
                                   CreateConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectionRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

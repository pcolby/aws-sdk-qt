// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTREQUEST_P_H
#define QTAWS_UPDATEHOSTREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "updatehostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class UpdateHostRequest;

class UpdateHostRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    UpdateHostRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   UpdateHostRequest * const q);
    UpdateHostRequestPrivate(const UpdateHostRequestPrivate &other,
                                   UpdateHostRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARTIFACTURLREQUEST_P_H
#define QTAWS_GETARTIFACTURLREQUEST_P_H

#include "amplifyrequest_p.h"
#include "getartifacturlrequest.h"

namespace QtAws {
namespace Amplify {

class GetArtifactUrlRequest;

class GetArtifactUrlRequestPrivate : public AmplifyRequestPrivate {

public:
    GetArtifactUrlRequestPrivate(const AmplifyRequest::Action action,
                                   GetArtifactUrlRequest * const q);
    GetArtifactUrlRequestPrivate(const GetArtifactUrlRequestPrivate &other,
                                   GetArtifactUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetArtifactUrlRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif

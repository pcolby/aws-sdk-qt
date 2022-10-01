// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBMANIFESTREQUEST_P_H
#define QTAWS_GETJOBMANIFESTREQUEST_P_H

#include "snowballrequest_p.h"
#include "getjobmanifestrequest.h"

namespace QtAws {
namespace Snowball {

class GetJobManifestRequest;

class GetJobManifestRequestPrivate : public SnowballRequestPrivate {

public:
    GetJobManifestRequestPrivate(const SnowballRequest::Action action,
                                   GetJobManifestRequest * const q);
    GetJobManifestRequestPrivate(const GetJobManifestRequestPrivate &other,
                                   GetJobManifestRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobManifestRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif

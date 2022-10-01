// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONARTIFACTSREQUEST_P_H
#define QTAWS_LISTTESTGRIDSESSIONARTIFACTSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listtestgridsessionartifactsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionArtifactsRequest;

class ListTestGridSessionArtifactsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListTestGridSessionArtifactsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListTestGridSessionArtifactsRequest * const q);
    ListTestGridSessionArtifactsRequestPrivate(const ListTestGridSessionArtifactsRequestPrivate &other,
                                   ListTestGridSessionArtifactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTestGridSessionArtifactsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

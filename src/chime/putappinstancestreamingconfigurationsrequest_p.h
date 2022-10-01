// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "putappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceStreamingConfigurationsRequest;

class PutAppInstanceStreamingConfigurationsRequestPrivate : public ChimeRequestPrivate {

public:
    PutAppInstanceStreamingConfigurationsRequestPrivate(const ChimeRequest::Action action,
                                   PutAppInstanceStreamingConfigurationsRequest * const q);
    PutAppInstanceStreamingConfigurationsRequestPrivate(const PutAppInstanceStreamingConfigurationsRequestPrivate &other,
                                   PutAppInstanceStreamingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

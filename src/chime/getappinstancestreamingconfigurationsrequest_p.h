// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "getappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceStreamingConfigurationsRequest;

class GetAppInstanceStreamingConfigurationsRequestPrivate : public ChimeRequestPrivate {

public:
    GetAppInstanceStreamingConfigurationsRequestPrivate(const ChimeRequest::Action action,
                                   GetAppInstanceStreamingConfigurationsRequest * const q);
    GetAppInstanceStreamingConfigurationsRequestPrivate(const GetAppInstanceStreamingConfigurationsRequestPrivate &other,
                                   GetAppInstanceStreamingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

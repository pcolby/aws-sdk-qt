// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceStreamingConfigurationsRequest;

class DeleteAppInstanceStreamingConfigurationsRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteAppInstanceStreamingConfigurationsRequestPrivate(const ChimeRequest::Action action,
                                   DeleteAppInstanceStreamingConfigurationsRequest * const q);
    DeleteAppInstanceStreamingConfigurationsRequestPrivate(const DeleteAppInstanceStreamingConfigurationsRequestPrivate &other,
                                   DeleteAppInstanceStreamingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

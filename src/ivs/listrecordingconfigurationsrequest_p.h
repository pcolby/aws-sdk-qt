// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTRECORDINGCONFIGURATIONSREQUEST_P_H

#include "ivsrequest_p.h"
#include "listrecordingconfigurationsrequest.h"

namespace QtAws {
namespace Ivs {

class ListRecordingConfigurationsRequest;

class ListRecordingConfigurationsRequestPrivate : public IvsRequestPrivate {

public:
    ListRecordingConfigurationsRequestPrivate(const IvsRequest::Action action,
                                   ListRecordingConfigurationsRequest * const q);
    ListRecordingConfigurationsRequestPrivate(const ListRecordingConfigurationsRequestPrivate &other,
                                   ListRecordingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecordingConfigurationsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

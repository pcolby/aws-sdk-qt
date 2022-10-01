// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETRECORDINGCONFIGURATIONREQUEST_P_H

#include "ivsrequest_p.h"
#include "getrecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class GetRecordingConfigurationRequest;

class GetRecordingConfigurationRequestPrivate : public IvsRequestPrivate {

public:
    GetRecordingConfigurationRequestPrivate(const IvsRequest::Action action,
                                   GetRecordingConfigurationRequest * const q);
    GetRecordingConfigurationRequestPrivate(const GetRecordingConfigurationRequestPrivate &other,
                                   GetRecordingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

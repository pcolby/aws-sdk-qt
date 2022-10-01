// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECORDINGCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATERECORDINGCONFIGURATIONREQUEST_P_H

#include "ivsrequest_p.h"
#include "createrecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class CreateRecordingConfigurationRequest;

class CreateRecordingConfigurationRequestPrivate : public IvsRequestPrivate {

public:
    CreateRecordingConfigurationRequestPrivate(const IvsRequest::Action action,
                                   CreateRecordingConfigurationRequest * const q);
    CreateRecordingConfigurationRequestPrivate(const CreateRecordingConfigurationRequestPrivate &other,
                                   CreateRecordingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

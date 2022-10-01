// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETERECORDINGCONFIGURATIONREQUEST_P_H

#include "ivsrequest_p.h"
#include "deleterecordingconfigurationrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteRecordingConfigurationRequest;

class DeleteRecordingConfigurationRequestPrivate : public IvsRequestPrivate {

public:
    DeleteRecordingConfigurationRequestPrivate(const IvsRequest::Action action,
                                   DeleteRecordingConfigurationRequest * const q);
    DeleteRecordingConfigurationRequestPrivate(const DeleteRecordingConfigurationRequestPrivate &other,
                                   DeleteRecordingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecordingConfigurationRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putsipmediaapplicationloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutSipMediaApplicationLoggingConfigurationRequest;

class PutSipMediaApplicationLoggingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    PutSipMediaApplicationLoggingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   PutSipMediaApplicationLoggingConfigurationRequest * const q);
    PutSipMediaApplicationLoggingConfigurationRequestPrivate(const PutSipMediaApplicationLoggingConfigurationRequestPrivate &other,
                                   PutSipMediaApplicationLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSipMediaApplicationLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

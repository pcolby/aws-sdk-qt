// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getsipmediaapplicationloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationLoggingConfigurationRequest;

class GetSipMediaApplicationLoggingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    GetSipMediaApplicationLoggingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   GetSipMediaApplicationLoggingConfigurationRequest * const q);
    GetSipMediaApplicationLoggingConfigurationRequestPrivate(const GetSipMediaApplicationLoggingConfigurationRequestPrivate &other,
                                   GetSipMediaApplicationLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSipMediaApplicationLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

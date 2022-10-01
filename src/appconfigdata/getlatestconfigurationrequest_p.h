// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLATESTCONFIGURATIONREQUEST_P_H
#define QTAWS_GETLATESTCONFIGURATIONREQUEST_P_H

#include "appconfigdatarequest_p.h"
#include "getlatestconfigurationrequest.h"

namespace QtAws {
namespace AppConfigData {

class GetLatestConfigurationRequest;

class GetLatestConfigurationRequestPrivate : public AppConfigDataRequestPrivate {

public:
    GetLatestConfigurationRequestPrivate(const AppConfigDataRequest::Action action,
                                   GetLatestConfigurationRequest * const q);
    GetLatestConfigurationRequestPrivate(const GetLatestConfigurationRequestPrivate &other,
                                   GetLatestConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLatestConfigurationRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif

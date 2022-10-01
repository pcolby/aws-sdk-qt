// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETNOTIFICATIONCONFIGURATIONREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetNotificationConfigurationRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT GetNotificationConfigurationRequest : public CodeGuruProfilerRequest {

public:
    GetNotificationConfigurationRequest(const GetNotificationConfigurationRequest &other);
    GetNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNotificationConfigurationRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

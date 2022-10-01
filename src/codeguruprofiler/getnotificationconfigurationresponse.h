// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETNOTIFICATIONCONFIGURATIONRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "getnotificationconfigurationrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetNotificationConfigurationResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT GetNotificationConfigurationResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    GetNotificationConfigurationResponse(const GetNotificationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNotificationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNotificationConfigurationResponse)
    Q_DISABLE_COPY(GetNotificationConfigurationResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

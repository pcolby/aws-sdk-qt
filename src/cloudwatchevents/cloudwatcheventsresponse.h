// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHEVENTSRESPONSE_H
#define QTAWS_CLOUDWATCHEVENTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudwatcheventsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CloudWatchEventsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudWatchEventsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudWatchEventsResponse(CloudWatchEventsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudWatchEventsResponse)
    Q_DISABLE_COPY(CloudWatchEventsResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

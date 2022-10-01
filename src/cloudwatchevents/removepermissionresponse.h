// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONRESPONSE_H
#define QTAWS_REMOVEPERMISSIONRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "removepermissionrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class RemovePermissionResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT RemovePermissionResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    RemovePermissionResponse(const RemovePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemovePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemovePermissionResponse)
    Q_DISABLE_COPY(RemovePermissionResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

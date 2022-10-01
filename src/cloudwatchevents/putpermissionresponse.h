// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONRESPONSE_H
#define QTAWS_PUTPERMISSIONRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "putpermissionrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutPermissionResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutPermissionResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    PutPermissionResponse(const PutPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionResponse)
    Q_DISABLE_COPY(PutPermissionResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

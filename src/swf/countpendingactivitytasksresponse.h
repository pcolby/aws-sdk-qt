// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGACTIVITYTASKSRESPONSE_H
#define QTAWS_COUNTPENDINGACTIVITYTASKSRESPONSE_H

#include "swfresponse.h"
#include "countpendingactivitytasksrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingActivityTasksResponsePrivate;

class QTAWSSWF_EXPORT CountPendingActivityTasksResponse : public SwfResponse {
    Q_OBJECT

public:
    CountPendingActivityTasksResponse(const CountPendingActivityTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CountPendingActivityTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountPendingActivityTasksResponse)
    Q_DISABLE_COPY(CountPendingActivityTasksResponse)

};

} // namespace Swf
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGDECISIONTASKSRESPONSE_H
#define QTAWS_COUNTPENDINGDECISIONTASKSRESPONSE_H

#include "swfresponse.h"
#include "countpendingdecisiontasksrequest.h"

namespace QtAws {
namespace Swf {

class CountPendingDecisionTasksResponsePrivate;

class QTAWSSWF_EXPORT CountPendingDecisionTasksResponse : public SwfResponse {
    Q_OBJECT

public:
    CountPendingDecisionTasksResponse(const CountPendingDecisionTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CountPendingDecisionTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountPendingDecisionTasksResponse)
    Q_DISABLE_COPY(CountPendingDecisionTasksResponse)

};

} // namespace Swf
} // namespace QtAws

#endif

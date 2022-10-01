// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULENAMESBYTARGETRESPONSE_H
#define QTAWS_LISTRULENAMESBYTARGETRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listrulenamesbytargetrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRuleNamesByTargetResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListRuleNamesByTargetResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListRuleNamesByTargetResponse(const ListRuleNamesByTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRuleNamesByTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleNamesByTargetResponse)
    Q_DISABLE_COPY(ListRuleNamesByTargetResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

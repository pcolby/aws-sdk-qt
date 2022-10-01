// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSBYRULEREQUEST_H
#define QTAWS_LISTTARGETSBYRULEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListTargetsByRuleRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListTargetsByRuleRequest : public CloudWatchEventsRequest {

public:
    ListTargetsByRuleRequest(const ListTargetsByRuleRequest &other);
    ListTargetsByRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsByRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

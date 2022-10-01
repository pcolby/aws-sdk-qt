// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULENAMESBYTARGETREQUEST_H
#define QTAWS_LISTRULENAMESBYTARGETREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRuleNamesByTargetRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListRuleNamesByTargetRequest : public CloudWatchEventsRequest {

public:
    ListRuleNamesByTargetRequest(const ListRuleNamesByTargetRequest &other);
    ListRuleNamesByTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleNamesByTargetRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

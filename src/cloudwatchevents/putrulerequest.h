// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEREQUEST_H
#define QTAWS_PUTRULEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutRuleRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutRuleRequest : public CloudWatchEventsRequest {

public:
    PutRuleRequest(const PutRuleRequest &other);
    PutRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

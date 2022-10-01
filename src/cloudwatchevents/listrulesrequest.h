// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESREQUEST_H
#define QTAWS_LISTRULESREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRulesRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListRulesRequest : public CloudWatchEventsRequest {

public:
    ListRulesRequest(const ListRulesRequest &other);
    ListRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif

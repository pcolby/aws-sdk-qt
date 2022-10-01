// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPEVENTSREQUEST_H
#define QTAWS_LOOKUPEVENTSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class LookupEventsRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT LookupEventsRequest : public CloudTrailRequest {

public:
    LookupEventsRequest(const LookupEventsRequest &other);
    LookupEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupEventsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

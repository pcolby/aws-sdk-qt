// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSELECTORSREQUEST_H
#define QTAWS_PUTEVENTSELECTORSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class PutEventSelectorsRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT PutEventSelectorsRequest : public CloudTrailRequest {

public:
    PutEventSelectorsRequest(const PutEventSelectorsRequest &other);
    PutEventSelectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

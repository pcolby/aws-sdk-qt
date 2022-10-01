// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSELECTORSREQUEST_H
#define QTAWS_GETEVENTSELECTORSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventSelectorsRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT GetEventSelectorsRequest : public CloudTrailRequest {

public:
    GetEventSelectorsRequest(const GetEventSelectorsRequest &other);
    GetEventSelectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventSelectorsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILSTATUSREQUEST_H
#define QTAWS_GETTRAILSTATUSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailStatusRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT GetTrailStatusRequest : public CloudTrailRequest {

public:
    GetTrailStatusRequest(const GetTrailStatusRequest &other);
    GetTrailStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrailStatusRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

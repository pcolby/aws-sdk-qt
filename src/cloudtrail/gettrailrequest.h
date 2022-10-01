// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILREQUEST_H
#define QTAWS_GETTRAILREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT GetTrailRequest : public CloudTrailRequest {

public:
    GetTrailRequest(const GetTrailRequest &other);
    GetTrailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

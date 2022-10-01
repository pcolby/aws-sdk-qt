// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAILREQUEST_H
#define QTAWS_UPDATETRAILREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateTrailRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT UpdateTrailRequest : public CloudTrailRequest {

public:
    UpdateTrailRequest(const UpdateTrailRequest &other);
    UpdateTrailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

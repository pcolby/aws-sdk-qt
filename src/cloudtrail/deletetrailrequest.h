// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAILREQUEST_H
#define QTAWS_DELETETRAILREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteTrailRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT DeleteTrailRequest : public CloudTrailRequest {

public:
    DeleteTrailRequest(const DeleteTrailRequest &other);
    DeleteTrailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

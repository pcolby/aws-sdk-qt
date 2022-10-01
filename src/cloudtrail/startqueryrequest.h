// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYREQUEST_H
#define QTAWS_STARTQUERYREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartQueryRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT StartQueryRequest : public CloudTrailRequest {

public:
    StartQueryRequest(const StartQueryRequest &other);
    StartQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUERYREQUEST_H
#define QTAWS_CANCELQUERYREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CancelQueryRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT CancelQueryRequest : public CloudTrailRequest {

public:
    CancelQueryRequest(const CancelQueryRequest &other);
    CancelQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelQueryRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

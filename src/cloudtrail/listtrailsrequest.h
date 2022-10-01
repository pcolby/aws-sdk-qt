// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAILSREQUEST_H
#define QTAWS_LISTTRAILSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListTrailsRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT ListTrailsRequest : public CloudTrailRequest {

public:
    ListTrailsRequest(const ListTrailsRequest &other);
    ListTrailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrailsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERIESREQUEST_H
#define QTAWS_LISTQUERIESREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListQueriesRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT ListQueriesRequest : public CloudTrailRequest {

public:
    ListQueriesRequest(const ListQueriesRequest &other);
    ListQueriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueriesRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

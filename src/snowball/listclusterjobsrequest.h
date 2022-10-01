// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERJOBSREQUEST_H
#define QTAWS_LISTCLUSTERJOBSREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class ListClusterJobsRequestPrivate;

class QTAWSSNOWBALL_EXPORT ListClusterJobsRequest : public SnowballRequest {

public:
    ListClusterJobsRequest(const ListClusterJobsRequest &other);
    ListClusterJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClusterJobsRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif

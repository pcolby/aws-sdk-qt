// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTDATASTORESREQUEST_H
#define QTAWS_LISTEVENTDATASTORESREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListEventDataStoresRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT ListEventDataStoresRequest : public CloudTrailRequest {

public:
    ListEventDataStoresRequest(const ListEventDataStoresRequest &other);
    ListEventDataStoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventDataStoresRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

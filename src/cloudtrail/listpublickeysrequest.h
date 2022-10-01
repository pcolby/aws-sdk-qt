// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSREQUEST_H
#define QTAWS_LISTPUBLICKEYSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListPublicKeysRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT ListPublicKeysRequest : public CloudTrailRequest {

public:
    ListPublicKeysRequest(const ListPublicKeysRequest &other);
    ListPublicKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublicKeysRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

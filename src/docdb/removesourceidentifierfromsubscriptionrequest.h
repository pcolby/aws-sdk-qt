// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class RemoveSourceIdentifierFromSubscriptionRequestPrivate;

class QTAWSDOCDB_EXPORT RemoveSourceIdentifierFromSubscriptionRequest : public DocDbRequest {

public:
    RemoveSourceIdentifierFromSubscriptionRequest(const RemoveSourceIdentifierFromSubscriptionRequest &other);
    RemoveSourceIdentifierFromSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveSourceIdentifierFromSubscriptionRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif

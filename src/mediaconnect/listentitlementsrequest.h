// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEMENTSREQUEST_H
#define QTAWS_LISTENTITLEMENTSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListEntitlementsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT ListEntitlementsRequest : public MediaConnectRequest {

public:
    ListEntitlementsRequest(const ListEntitlementsRequest &other);
    ListEntitlementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitlementsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif

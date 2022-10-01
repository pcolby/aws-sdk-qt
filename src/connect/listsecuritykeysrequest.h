// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYKEYSREQUEST_H
#define QTAWS_LISTSECURITYKEYSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityKeysRequestPrivate;

class QTAWSCONNECT_EXPORT ListSecurityKeysRequest : public ConnectRequest {

public:
    ListSecurityKeysRequest(const ListSecurityKeysRequest &other);
    ListSecurityKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityKeysRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

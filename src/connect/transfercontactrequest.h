// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCONTACTREQUEST_H
#define QTAWS_TRANSFERCONTACTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class TransferContactRequestPrivate;

class QTAWSCONNECT_EXPORT TransferContactRequest : public ConnectRequest {

public:
    TransferContactRequest(const TransferContactRequest &other);
    TransferContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

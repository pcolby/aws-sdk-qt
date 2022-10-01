// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVERREQUEST_H
#define QTAWS_CREATESERVERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class CreateServerRequestPrivate;

class QTAWSTRANSFER_EXPORT CreateServerRequest : public TransferRequest {

public:
    CreateServerRequest(const CreateServerRequest &other);
    CreateServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSREQUEST_H
#define QTAWS_CREATEACCESSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAccessRequestPrivate;

class QTAWSTRANSFER_EXPORT CreateAccessRequest : public TransferRequest {

public:
    CreateAccessRequest(const CreateAccessRequest &other);
    CreateAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

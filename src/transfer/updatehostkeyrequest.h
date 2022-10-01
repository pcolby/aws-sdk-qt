// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTKEYREQUEST_H
#define QTAWS_UPDATEHOSTKEYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateHostKeyRequestPrivate;

class QTAWSTRANSFER_EXPORT UpdateHostKeyRequest : public TransferRequest {

public:
    UpdateHostKeyRequest(const UpdateHostKeyRequest &other);
    UpdateHostKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSREQUEST_H
#define QTAWS_UPDATEACCESSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAccessRequestPrivate;

class QTAWSTRANSFER_EXPORT UpdateAccessRequest : public TransferRequest {

public:
    UpdateAccessRequest(const UpdateAccessRequest &other);
    UpdateAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif

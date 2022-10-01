// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELKEYDELETIONREQUEST_H
#define QTAWS_CANCELKEYDELETIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class CancelKeyDeletionRequestPrivate;

class QTAWSKMS_EXPORT CancelKeyDeletionRequest : public KmsRequest {

public:
    CancelKeyDeletionRequest(const CancelKeyDeletionRequest &other);
    CancelKeyDeletionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelKeyDeletionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

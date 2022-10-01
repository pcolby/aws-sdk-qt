// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEKEYDESCRIPTIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class UpdateKeyDescriptionRequestPrivate;

class QTAWSKMS_EXPORT UpdateKeyDescriptionRequest : public KmsRequest {

public:
    UpdateKeyDescriptionRequest(const UpdateKeyDescriptionRequest &other);
    UpdateKeyDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKeyDescriptionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

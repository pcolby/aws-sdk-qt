// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYREGIONREQUEST_H
#define QTAWS_UPDATEPRIMARYREGIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class UpdatePrimaryRegionRequestPrivate;

class QTAWSKMS_EXPORT UpdatePrimaryRegionRequest : public KmsRequest {

public:
    UpdatePrimaryRegionRequest(const UpdatePrimaryRegionRequest &other);
    UpdatePrimaryRegionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrimaryRegionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif

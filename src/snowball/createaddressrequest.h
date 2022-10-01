// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSREQUEST_H
#define QTAWS_CREATEADDRESSREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class CreateAddressRequestPrivate;

class QTAWSSNOWBALL_EXPORT CreateAddressRequest : public SnowballRequest {

public:
    CreateAddressRequest(const CreateAddressRequest &other);
    CreateAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAddressRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEE911ADDRESSREQUEST_H
#define QTAWS_VALIDATEE911ADDRESSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ValidateE911AddressRequestPrivate;

class QTAWSCHIME_EXPORT ValidateE911AddressRequest : public ChimeRequest {

public:
    ValidateE911AddressRequest(const ValidateE911AddressRequest &other);
    ValidateE911AddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateE911AddressRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

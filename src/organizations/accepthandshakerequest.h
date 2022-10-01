// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTHANDSHAKEREQUEST_H
#define QTAWS_ACCEPTHANDSHAKEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class AcceptHandshakeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT AcceptHandshakeRequest : public OrganizationsRequest {

public:
    AcceptHandshakeRequest(const AcceptHandshakeRequest &other);
    AcceptHandshakeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

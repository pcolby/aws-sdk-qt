// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDNODEEXCHANGEREQUEST_H
#define QTAWS_ACCEPTRESERVEDNODEEXCHANGEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AcceptReservedNodeExchangeRequestPrivate;

class QTAWSREDSHIFT_EXPORT AcceptReservedNodeExchangeRequest : public RedshiftRequest {

public:
    AcceptReservedNodeExchangeRequest(const AcceptReservedNodeExchangeRequest &other);
    AcceptReservedNodeExchangeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptReservedNodeExchangeRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

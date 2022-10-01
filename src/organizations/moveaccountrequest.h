// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEACCOUNTREQUEST_H
#define QTAWS_MOVEACCOUNTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class MoveAccountRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT MoveAccountRequest : public OrganizationsRequest {

public:
    MoveAccountRequest(const MoveAccountRequest &other);
    MoveAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEACCOUNTREQUEST_H
#define QTAWS_CLOSEACCOUNTREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CloseAccountRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CloseAccountRequest : public OrganizationsRequest {

public:
    CloseAccountRequest(const CloseAccountRequest &other);
    CloseAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

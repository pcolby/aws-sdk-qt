// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERIFIEDEMAILADDRESSESREQUEST_H
#define QTAWS_LISTVERIFIEDEMAILADDRESSESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ListVerifiedEmailAddressesRequestPrivate;

class QTAWSSES_EXPORT ListVerifiedEmailAddressesRequest : public SesRequest {

public:
    ListVerifiedEmailAddressesRequest(const ListVerifiedEmailAddressesRequest &other);
    ListVerifiedEmailAddressesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVerifiedEmailAddressesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULAACCEPTANCESREQUEST_H
#define QTAWS_LISTEULAACCEPTANCESREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListEulaAcceptancesRequestPrivate;

class QTAWSNIMBLE_EXPORT ListEulaAcceptancesRequest : public NimbleRequest {

public:
    ListEulaAcceptancesRequest(const ListEulaAcceptancesRequest &other);
    ListEulaAcceptancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEulaAcceptancesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBONUSPAYMENTSREQUEST_H
#define QTAWS_LISTBONUSPAYMENTSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListBonusPaymentsRequestPrivate;

class QTAWSMTURK_EXPORT ListBonusPaymentsRequest : public MTurkRequest {

public:
    ListBonusPaymentsRequest(const ListBonusPaymentsRequest &other);
    ListBonusPaymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBonusPaymentsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif

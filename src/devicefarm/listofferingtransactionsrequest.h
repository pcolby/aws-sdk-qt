// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGTRANSACTIONSREQUEST_H
#define QTAWS_LISTOFFERINGTRANSACTIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingTransactionsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListOfferingTransactionsRequest : public DeviceFarmRequest {

public:
    ListOfferingTransactionsRequest(const ListOfferingTransactionsRequest &other);
    ListOfferingTransactionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingTransactionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

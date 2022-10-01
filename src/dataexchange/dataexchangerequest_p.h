// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAEXCHANGEREQUEST_P_H
#define QTAWS_DATAEXCHANGEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class DataExchangeRequest;

class DataExchangeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DataExchangeRequest::Action action; ///< DataExchange action to be performed.
    QString apiVersion;        ///< DataExchange API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DataExchange request (query string) parameters. @todo?

    DataExchangeRequestPrivate(const DataExchangeRequest::Action action, DataExchangeRequest * const q);
    DataExchangeRequestPrivate(const DataExchangeRequestPrivate &other, DataExchangeRequest * const q);

    static QString toString(const DataExchangeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DataExchangeRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif

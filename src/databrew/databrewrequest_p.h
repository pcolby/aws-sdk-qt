// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWREQUEST_P_H
#define QTAWS_DATABREWREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DataBrewRequest;

class DataBrewRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DataBrewRequest::Action action; ///< DataBrew action to be performed.
    QString apiVersion;        ///< DataBrew API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DataBrew request (query string) parameters. @todo?

    DataBrewRequestPrivate(const DataBrewRequest::Action action, DataBrewRequest * const q);
    DataBrewRequestPrivate(const DataBrewRequestPrivate &other, DataBrewRequest * const q);

    static QString toString(const DataBrewRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DataBrewRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGDATAREQUEST_P_H
#define QTAWS_APPCONFIGDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appconfigdatarequest.h"

namespace QtAws {
namespace AppConfigData {

class AppConfigDataRequest;

class AppConfigDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppConfigDataRequest::Action action; ///< AppConfigData action to be performed.
    QString apiVersion;        ///< AppConfigData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppConfigData request (query string) parameters. @todo?

    AppConfigDataRequestPrivate(const AppConfigDataRequest::Action action, AppConfigDataRequest * const q);
    AppConfigDataRequestPrivate(const AppConfigDataRequestPrivate &other, AppConfigDataRequest * const q);

    static QString toString(const AppConfigDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppConfigDataRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif

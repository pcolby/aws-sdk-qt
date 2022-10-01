// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESV2REQUEST_P_H
#define QTAWS_SESV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class SESv2Request;

class SESv2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SESv2Request::Action action; ///< SESv2 action to be performed.
    QString apiVersion;        ///< SESv2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SESv2 request (query string) parameters. @todo?

    SESv2RequestPrivate(const SESv2Request::Action action, SESv2Request * const q);
    SESv2RequestPrivate(const SESv2RequestPrivate &other, SESv2Request * const q);

    static QString toString(const SESv2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(SESv2Request)

};

} // namespace SESv2
} // namespace QtAws

#endif

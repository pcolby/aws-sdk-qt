// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3REQUEST_P_H
#define QTAWS_S3REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3request.h"

namespace QtAws {
namespace S3 {

class S3Request;

class S3RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3Request::Action action; ///< S3 action to be performed.
    QString apiVersion;        ///< S3 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3 request (query string) parameters. @todo?

    S3RequestPrivate(const S3Request::Action action, S3Request * const q);
    S3RequestPrivate(const S3RequestPrivate &other, S3Request * const q);

    static QString toString(const S3Request::Action &action);

private:
    Q_DECLARE_PUBLIC(S3Request)

};

} // namespace S3
} // namespace QtAws

#endif

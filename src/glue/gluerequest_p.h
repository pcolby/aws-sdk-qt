// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLUEREQUEST_P_H
#define QTAWS_GLUEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GlueRequest;

class GlueRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GlueRequest::Action action; ///< Glue action to be performed.
    QString apiVersion;        ///< Glue API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Glue request (query string) parameters. @todo?

    GlueRequestPrivate(const GlueRequest::Action action, GlueRequest * const q);
    GlueRequestPrivate(const GlueRequestPrivate &other, GlueRequest * const q);

    static QString toString(const GlueRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GlueRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

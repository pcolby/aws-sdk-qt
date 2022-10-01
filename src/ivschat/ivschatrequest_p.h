// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCHATREQUEST_P_H
#define QTAWS_IVSCHATREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class IvsChatRequest;

class IvsChatRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IvsChatRequest::Action action; ///< IvsChat action to be performed.
    QString apiVersion;        ///< IvsChat API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IvsChat request (query string) parameters. @todo?

    IvsChatRequestPrivate(const IvsChatRequest::Action action, IvsChatRequest * const q);
    IvsChatRequestPrivate(const IvsChatRequestPrivate &other, IvsChatRequest * const q);

    static QString toString(const IvsChatRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IvsChatRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif

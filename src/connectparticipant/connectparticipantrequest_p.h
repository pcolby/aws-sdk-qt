// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTPARTICIPANTREQUEST_P_H
#define QTAWS_CONNECTPARTICIPANTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantRequest;

class ConnectParticipantRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConnectParticipantRequest::Action action; ///< ConnectParticipant action to be performed.
    QString apiVersion;        ///< ConnectParticipant API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ConnectParticipant request (query string) parameters. @todo?

    ConnectParticipantRequestPrivate(const ConnectParticipantRequest::Action action, ConnectParticipantRequest * const q);
    ConnectParticipantRequestPrivate(const ConnectParticipantRequestPrivate &other, ConnectParticipantRequest * const q);

    static QString toString(const ConnectParticipantRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConnectParticipantRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif

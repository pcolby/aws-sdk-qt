// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCONTACTSCLIENT_P_H
#define QTAWS_SSMCONTACTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SsmContacts {

class SsmContactsClient;

class SsmContactsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsmContactsClientPrivate(SsmContactsClient * const q);

private:
    Q_DECLARE_PUBLIC(SsmContactsClient)
    Q_DISABLE_COPY(SsmContactsClientPrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

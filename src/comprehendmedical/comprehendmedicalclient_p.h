// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDMEDICALCLIENT_P_H
#define QTAWS_COMPREHENDMEDICALCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalClient;

class ComprehendMedicalClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ComprehendMedicalClientPrivate(ComprehendMedicalClient * const q);

private:
    Q_DECLARE_PUBLIC(ComprehendMedicalClient)
    Q_DISABLE_COPY(ComprehendMedicalClientPrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif

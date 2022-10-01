// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMCLIENT_P_H
#define QTAWS_DLMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Dlm {

class DlmClient;

class DlmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DlmClientPrivate(DlmClient * const q);

private:
    Q_DECLARE_PUBLIC(DlmClient)
    Q_DISABLE_COPY(DlmClientPrivate)

};

} // namespace Dlm
} // namespace QtAws

#endif

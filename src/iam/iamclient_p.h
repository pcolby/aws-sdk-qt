// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IAMCLIENT_P_H
#define QTAWS_IAMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Iam {

class IamClient;

class IamClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IamClientPrivate(IamClient * const q);

private:
    Q_DECLARE_PUBLIC(IamClient)
    Q_DISABLE_COPY(IamClientPrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

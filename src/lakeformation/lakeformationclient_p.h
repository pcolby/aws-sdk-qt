// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONCLIENT_P_H
#define QTAWS_LAKEFORMATIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LakeFormation {

class LakeFormationClient;

class LakeFormationClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LakeFormationClientPrivate(LakeFormationClient * const q);

private:
    Q_DECLARE_PUBLIC(LakeFormationClient)
    Q_DISABLE_COPY(LakeFormationClientPrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

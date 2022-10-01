// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCLIENT_P_H
#define QTAWS_CODESTARCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeStar {

class CodeStarClient;

class CodeStarClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeStarClientPrivate(CodeStarClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeStarClient)
    Q_DISABLE_COPY(CodeStarClientPrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif

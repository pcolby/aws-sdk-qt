// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSCLIENT_P_H
#define QTAWS_CODESTARCONNECTIONSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsClient;

class CodeStarconnectionsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeStarconnectionsClientPrivate(CodeStarconnectionsClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeStarconnectionsClient)
    Q_DISABLE_COPY(CodeStarconnectionsClientPrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

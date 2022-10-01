// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TEXTRACTCLIENT_P_H
#define QTAWS_TEXTRACTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Textract {

class TextractClient;

class TextractClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TextractClientPrivate(TextractClient * const q);

private:
    Q_DECLARE_PUBLIC(TextractClient)
    Q_DISABLE_COPY(TextractClientPrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

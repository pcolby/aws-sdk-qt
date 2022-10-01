// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/qtawsglobal.h"

class TestAwsSignatureV3 : public QObject {
    Q_OBJECT

private slots:
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void algorithmDesignation_data();
    void algorithmDesignation();

    void authorizationHeaderValue_data();
    void authorizationHeaderValue();

    void canonicalHeader_data();
    void canonicalHeader();

    void canonicalHeaders_data();
    void canonicalHeaders();

    void canonicalRequest_data();
    void canonicalRequest();

    void setAuthorizationHeader_data();
    void setAuthorizationHeader();

    void setDateHeader_data();
    void setDateHeader();
#endif

    void sign();

    void version();
};

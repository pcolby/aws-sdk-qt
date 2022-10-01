// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/qtawsglobal.h"

class TestAwsSignatureV2 : public QObject {
    Q_OBJECT

private slots:
    void sign_data();
    void sign();

    void version();

    // TestAwsSignatureV2Private functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void adornRequest_data();
    void adornRequest();

    void canonicalRequest_data();
    void canonicalRequest();

    void signatureMethod_data();
    void signatureMethod();
#endif
};

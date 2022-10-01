// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/qtawsglobal.h"

class TestAwsSignatureV0 : public QObject {
    Q_OBJECT

private slots:
    void sign_data();
    void sign();

    void version();

    // TestAwsSignatureV0Private functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void adornRequest_data();
    void adornRequest();

    void canonicalQuery_data();
    void canonicalQuery();
#endif

};

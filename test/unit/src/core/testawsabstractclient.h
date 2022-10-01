// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAbstractClient : public QObject {
    Q_OBJECT

private slots:
    void construct();
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void credentials_data();
    void credentials();

    void endpoint_data();
    void endpoint();

    void networkAccessManager_data();
    void networkAccessManager();
    void networkAccessManager_parent();

    void region_data();
    void region();

    void send_data();
    void send();

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void serviceName_data();
    void serviceName();
    #endif

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void signature_data();
    void signature();
    #endif

    // AwsAbstractClientPrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void constructPrivate();
    #endif
};

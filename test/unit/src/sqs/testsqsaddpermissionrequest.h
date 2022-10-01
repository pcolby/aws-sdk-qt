// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsAddPermissionRequest : public QObject {
    Q_OBJECT

private slots:
    void construct_params_data();
    void construct_params();

    void construct_copy_data();
    void construct_copy();

    void construct_default();

    void isValid_data();
    void isValid();

    void label_data();
    void label();

    void queueUrl_data();
    void queueUrl();

    void permission_data();
    void permission();

    void permissions_account_data();
    void permissions_account();

    void permissions_data();
    void permissions();

    void response();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void urlQuery_data();
    void urlQuery();
    #endif
};

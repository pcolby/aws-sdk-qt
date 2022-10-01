// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsError : public QObject {
    Q_OBJECT

private slots:
    void construct_default();

    void construct_parse_data();
    void construct_parse();

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void construct_copy_data();
    void construct_copy();

    void assign_data();
    void assign();

    void equality_data();
    void equality();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void parse_data();
    void parse();

    void codeFromString_data();
    void codeFromString();

    void typeFromString_data();
    void typeFromString();
    #endif
};

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAbstractResponse : public QObject {
    Q_OBJECT

private slots:
    void construct();
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void errorString_data();
    void errorString();

    void hasError_data();
    void hasError();

    void isValid_data();
    void isValid();

    void networkError_data();
    void networkError();

    void xmlParseError_data();
    void xmlParseError();

    void xmlParseErrorString_data();
    void xmlParseErrorString();

    void request_data();
    void request();

    void toVariant_data();
    void toVariant();

    void isSuccess_data();
    void isSuccess();

    void parse_data();
    void parse();

    void replyFinished();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif

protected:
    QVariant toVariant(const QByteArray &bytes);

};

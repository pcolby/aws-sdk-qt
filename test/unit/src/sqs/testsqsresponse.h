// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsResponse : public QObject {
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

    void requestId_data();
    void requestId();

    void serviceErrors_data();
    void serviceErrors();

    void parseFailure_data();
    void parseFailure();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void parseErrorResponse_data();
    void parseErrorResponse();

    void parseResponseMetadata_data();
    void parseResponseMetadata();
    #endif

};

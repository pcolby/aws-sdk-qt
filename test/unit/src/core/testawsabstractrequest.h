// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAbstractRequest : public QObject {
    Q_OBJECT

private slots:
    void construct_default();

    void construct_copy_data();
    void construct_copy();

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void assignment_data();
    void assignment();

    void data_data();
    void data();

  //void isValid() = 0;

    void networkRequest_data();
    void networkRequest();

    void operation_data();
    void operation();

    void send_data();
    void send();

    void equality_data();
    void equality();

  //void response() = 0;

  //void unsignedRequest() = 0;

    // AwsAbstractRequestPrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void post_put_data();
    void post_put();
    #endif
};

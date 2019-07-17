/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

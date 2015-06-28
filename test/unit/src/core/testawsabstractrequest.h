/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QTest>

class TestAwsAbstractRequest : public QObject {
    Q_OBJECT

private slots:
    void data_data();
    void data();

    void isValid_data();
    void isValid();

    void networkRequest_data();
    void networkRequest();

    void operation_data();
    void operation();

    void send_data();
    void send();

    void construct_d_ptr();

    void response_data();
    void response();

    void unsignedRequest_data();
    void unsignedRequest();

    // AwsAbstractRequestPrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void post();
    void put();
    #endif
};

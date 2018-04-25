/*
    Copyright 2013-2018 Paul Colby

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

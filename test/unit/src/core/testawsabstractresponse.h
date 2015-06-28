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

class TestAwsAbstractResponse : public QObject {
    Q_OBJECT

private slots:
    void errorString_data();
    void errorString();

/*    void hasError_data();
    void hasError();

    void isValid_data();
    void isValid();

    void networkError_data();
    void networkError();

    void xmlParseError_data();
    void xmlParseError();

    void xmlParseErrorString_data();
    void xmlParseErrorString();

    void toVariant_data();
    void toVariant();

    void construct_d_ptr();

    void isSuccess_data();
    void isSuccess();

    void setReply(QNetworkReply * reply);
    void setXmlError(const QXmlStreamReader &xml);

    void parse_data();
    void parse();

    void replyFinished_data();
    void replyFinished();
*/
    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif
};

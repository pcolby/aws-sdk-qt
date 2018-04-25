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

class TestSqsCreateQueueRequest : public QObject {
    Q_OBJECT

private:
    void numeric_data();

private slots:
    void construct_queueName_data();
    void construct_queueName();

    void construct_copy_data();
    void construct_copy();

    void construct_default();

    void isValid_data();
    void isValid();

    void attribute_data();
    void attribute();

    void attributes_data();
    void attributes();

    void delaySeconds_data();
    void delaySeconds();

    void maximumMessageSize_data();
    void maximumMessageSize();

    void messageRetentionPeriod_data();
    void messageRetentionPeriod();

    void policy_data();
    void policy();

    void queueName_data();
    void queueName();

    void receiveMessageWaitTimeSeconds_data();
    void receiveMessageWaitTimeSeconds();

    void visibilityTimeout_data();
    void visibilityTimeout();

    void response();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif
};

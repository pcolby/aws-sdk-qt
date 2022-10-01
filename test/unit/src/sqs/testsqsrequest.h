// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsRequest : public QObject {
    Q_OBJECT

private slots:
    void construct_action_data();
    void construct_action();

    void construct_copy_data();
    void construct_copy();

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void construct_d_ptr();
    #endif

    void assignment_data();
    void assignment();

    void action_data();
    void action();

    void actionString_data();
    void actionString();

    void apiVersion_data();
    void apiVersion();

    void equality_data();
    void equality();

    void isValidQueueName_data();
    void isValidQueueName();

    void clearParameter_data();
    void clearParameter();

    void clearParameters_data();
    void clearParameters();

    void parameter_data();
    void parameter();

    void parameters_data();
    void parameters();

    void setParameter_data();
    void setParameter();

    void setParameters_data();
    void setParameters();

    void unsignedRequest_data();
    void unsignedRequest();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void urlQuery_data();
    void urlQuery();

    void toString_action_data();
    void toString_action();
    #endif
};

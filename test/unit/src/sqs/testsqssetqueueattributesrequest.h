// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsSetQueueAttributesRequest : public QObject {
    Q_OBJECT

private slots:
    void construct_params_data();
    void construct_params();

    void construct_copy_data();
    void construct_copy();

    void construct_default();

    void isValid_data();
    void isValid();

    /// @todo

    void response();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    /// @todo
    // Nothing to see here.
    #endif
};

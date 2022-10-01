// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAbstractSignature : public QObject {
    Q_OBJECT

private slots:
    void construct();

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void canonicalPath_data();
    void canonicalPath();

    void canonicalQuery_data();
    void canonicalQuery();

    void httpMethod_data();
    void httpMethod();

    void setQueryItem_data();
    void setQueryItem();
#endif
};

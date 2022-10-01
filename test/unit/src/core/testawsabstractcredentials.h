// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAbstractCredentials : public QObject {
    Q_OBJECT

private slots:
    void expiration();
    void isExpired();
    void isRefreshable();
    void refresh();

};

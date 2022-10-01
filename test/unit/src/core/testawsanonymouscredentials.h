// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestAwsAnonymousCredentials : public QObject {
    Q_OBJECT

private slots:
    void accessKeyId();
    void secretKey();
    void token();

    void expiration();
    void isExpired();
    void isRefreshable();

    void refresh();

};

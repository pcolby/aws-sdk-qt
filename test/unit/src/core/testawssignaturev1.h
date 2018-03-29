/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QTest>
#include "core/qtawsglobal.h"

class TestAwsSignatureV1 : public QObject {
    Q_OBJECT

private slots:
    void sign_data();
    void sign();

    void version();

    // TestAwsSignatureV1Private functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void adornRequest_data();
    void adornRequest();

    void canonicalQuery_data();
    void canonicalQuery();

    void caseInsensitiveLessThan_data();
    void caseInsensitiveLessThan();
#endif
};

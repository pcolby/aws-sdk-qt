/*
    Copyright 2013 Paul Colby

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

class TestAwsAbstractSignature : public QObject {
    Q_OBJECT

private slots:
    void construct();

    void canonicalPath_data();
    void canonicalPath();

    void canonicalQuery_data();
    void canonicalQuery();

    void httpMethod_data();
    void httpMethod();

    void setQueryItem_data();
    void setQueryItem();
};

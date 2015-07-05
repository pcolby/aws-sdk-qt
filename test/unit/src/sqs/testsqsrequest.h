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
    // Nothing to see here.
    #endif
};

/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"

QTAWS_BEGIN_NAMESPACE

class AwsRegion;

class QTAWS_EXPORT AwsRegionPrivate {
    Q_DECLARE_PUBLIC(AwsRegion)

public:
    AwsRegionPrivate(AwsRegion * const q);

protected:
    int region; ///< AwsRegion::Region represented by this object.

private:
    AwsRegion * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsRegionPrivate;
};

QTAWS_END_NAMESPACE

#endif

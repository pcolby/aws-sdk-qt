/*
    Copyright 2013-2019 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ADDAPPLICATIONOUTPUTREQUEST_P_H
#define QTAWS_ADDAPPLICATIONOUTPUTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationOutputRequest;

class QTAWS_EXPORT AddApplicationOutputRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationOutputRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationOutputRequest * const q);
    AddApplicationOutputRequestPrivate(const AddApplicationOutputRequestPrivate &other,
                                   AddApplicationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationOutputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONVERSIONREQUEST_P_H

#include "elasticbeanstalk_p.h"
#include "createapplicationversionrequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class CreateApplicationVersionRequest;

class QTAWS_EXPORT CreateApplicationVersionRequestPrivate : public ElasticBeanstalkPrivate {

public:
    CreateApplicationVersionRequestPrivate(const ElasticBeanstalk::Action action,
                                   CreateApplicationVersionRequest * const q);
    CreateApplicationVersionRequestPrivate(const CreateApplicationVersionRequestPrivate &other,
                                   CreateApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationVersionRequest)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif

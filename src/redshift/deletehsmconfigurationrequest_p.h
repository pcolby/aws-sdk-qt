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

#ifndef QTAWS_DELETEHSMCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEHSMCONFIGURATIONREQUEST_P_H

#include "redshift_p.h"
#include "deletehsmconfigurationrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmConfigurationRequest;

class QTAWS_EXPORT DeleteHsmConfigurationRequestPrivate : public RedshiftPrivate {

public:
    DeleteHsmConfigurationRequestPrivate(const Redshift::Action action,
                                   DeleteHsmConfigurationRequest * const q);
    DeleteHsmConfigurationRequestPrivate(const DeleteHsmConfigurationRequestPrivate &other,
                                   DeleteHsmConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHsmConfigurationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif

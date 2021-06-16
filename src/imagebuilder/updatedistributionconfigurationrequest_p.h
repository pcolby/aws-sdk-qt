/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "updatedistributionconfigurationrequest.h"

namespace QtAws {
namespace imagebuilder {

class UpdateDistributionConfigurationRequest;

class QTAWS_EXPORT UpdateDistributionConfigurationRequestPrivate : public imagebuilderRequestPrivate {

public:
    UpdateDistributionConfigurationRequestPrivate(const imagebuilderRequest::Action action,
                                   UpdateDistributionConfigurationRequest * const q);
    UpdateDistributionConfigurationRequestPrivate(const UpdateDistributionConfigurationRequestPrivate &other,
                                   UpdateDistributionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionConfigurationRequest)

};

} // namespace imagebuilder
} // namespace QtAws

#endif

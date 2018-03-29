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

#ifndef QTAWS_UPDATEAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONREQUEST_P_H

#include "codedeploy_p.h"
#include "updateapplicationrequest.h"

namespace AWS {

namespace CodeDeploy {

class UpdateApplicationRequest;

class QTAWS_EXPORT UpdateApplicationRequestPrivate : public CodeDeployPrivate {

public:
    UpdateApplicationRequestPrivate(const CodeDeploy::Action action,
                                   UpdateApplicationRequest * const q);
    UpdateApplicationRequestPrivate(const UpdateApplicationRequestPrivate &other,
                                   UpdateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationRequest)

};

} // namespace CodeDeploy
} // namespace AWS

#endif

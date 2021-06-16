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

#ifndef QTAWS_PAUSESERVICEREQUEST_P_H
#define QTAWS_PAUSESERVICEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "pauseservicerequest.h"

namespace QtAws {
namespace AppRunner {

class PauseServiceRequest;

class QTAWS_EXPORT PauseServiceRequestPrivate : public AppRunnerRequestPrivate {

public:
    PauseServiceRequestPrivate(const AppRunnerRequest::Action action,
                                   PauseServiceRequest * const q);
    PauseServiceRequestPrivate(const PauseServiceRequestPrivate &other,
                                   PauseServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(PauseServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif

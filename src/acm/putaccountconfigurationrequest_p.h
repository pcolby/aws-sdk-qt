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

#ifndef QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_P_H

#include "acmrequest_p.h"
#include "putaccountconfigurationrequest.h"

namespace QtAws {
namespace ACM {

class PutAccountConfigurationRequest;

class QTAWS_EXPORT PutAccountConfigurationRequestPrivate : public AcmRequestPrivate {

public:
    PutAccountConfigurationRequestPrivate(const AcmRequest::Action action,
                                   PutAccountConfigurationRequest * const q);
    PutAccountConfigurationRequestPrivate(const PutAccountConfigurationRequestPrivate &other,
                                   PutAccountConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountConfigurationRequest)

};

} // namespace ACM
} // namespace QtAws

#endif

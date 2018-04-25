/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_ENABLEVPCCLASSICLINKREQUEST_P_H
#define QTAWS_ENABLEVPCCLASSICLINKREQUEST_P_H

#include "ec2request_p.h"
#include "enablevpcclassiclinkrequest.h"

namespace QtAws {
namespace EC2 {

class EnableVpcClassicLinkRequest;

class QTAWS_EXPORT EnableVpcClassicLinkRequestPrivate : public Ec2RequestPrivate {

public:
    EnableVpcClassicLinkRequestPrivate(const Ec2Request::Action action,
                                   EnableVpcClassicLinkRequest * const q);
    EnableVpcClassicLinkRequestPrivate(const EnableVpcClassicLinkRequestPrivate &other,
                                   EnableVpcClassicLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableVpcClassicLinkRequest)

};

} // namespace EC2
} // namespace QtAws

#endif

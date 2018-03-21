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

#ifndef QTAWS_DESCRIBELUNACLIENTREQUEST_P_H
#define QTAWS_DESCRIBELUNACLIENTREQUEST_P_H

#include "cloudhsm_p.h"
#include "describelunaclientrequest.h"

namespace AWS {

namespace CloudHSM {

class DescribeLunaClientRequest;

class QTAWS_EXPORT DescribeLunaClientRequestPrivate : public CloudHSMPrivate {

public:
    DescribeLunaClientRequestPrivate(const CloudHSM::Action action,
                                   DescribeLunaClientRequest * const q);
    DescribeLunaClientRequestPrivate(const DescribeLunaClientRequestPrivate &other,
                                   DescribeLunaClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLunaClientRequest)

};

} // namespace CloudHSM
} // namespace AWS

#endif

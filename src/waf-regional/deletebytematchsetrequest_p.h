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

#ifndef QTAWS_DELETEBYTEMATCHSETREQUEST_P_H
#define QTAWS_DELETEBYTEMATCHSETREQUEST_P_H

#include "wafregional_p.h"
#include "deletebytematchsetrequest.h"

namespace AWS {

namespace WAFRegional {

class DeleteByteMatchSetRequest;

class QTAWS_EXPORT DeleteByteMatchSetRequestPrivate : public WAFRegionalPrivate {

public:
    DeleteByteMatchSetRequestPrivate(const WAFRegional::Action action,
                                   DeleteByteMatchSetRequest * const q);
    DeleteByteMatchSetRequestPrivate(const DeleteByteMatchSetRequestPrivate &other,
                                   DeleteByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteByteMatchSetRequest)

};

} // namespace WAFRegional
} // namespace AWS

#endif

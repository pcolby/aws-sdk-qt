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

#ifndef QTAWS_LISTCHANGEDBLOCKSREQUEST_P_H
#define QTAWS_LISTCHANGEDBLOCKSREQUEST_P_H

#include "ebsrequest_p.h"
#include "listchangedblocksrequest.h"

namespace QtAws {
namespace Ebs {

class ListChangedBlocksRequest;

class ListChangedBlocksRequestPrivate : public EbsRequestPrivate {

public:
    ListChangedBlocksRequestPrivate(const EbsRequest::Action action,
                                   ListChangedBlocksRequest * const q);
    ListChangedBlocksRequestPrivate(const ListChangedBlocksRequestPrivate &other,
                                   ListChangedBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChangedBlocksRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif

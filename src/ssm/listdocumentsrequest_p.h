/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_LISTDOCUMENTSREQUEST_P_H
#define QTAWS_LISTDOCUMENTSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listdocumentsrequest.h"

namespace QtAws {
namespace SSM {

class ListDocumentsRequest;

class QTAWS_EXPORT ListDocumentsRequestPrivate : public SsmRequestPrivate {

public:
    ListDocumentsRequestPrivate(const SsmRequest::Action action,
                                   ListDocumentsRequest * const q);
    ListDocumentsRequestPrivate(const ListDocumentsRequestPrivate &other,
                                   ListDocumentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentsRequest)

};

} // namespace SSM
} // namespace QtAws

#endif

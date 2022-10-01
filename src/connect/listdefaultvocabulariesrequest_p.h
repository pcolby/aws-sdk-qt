// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEFAULTVOCABULARIESREQUEST_P_H
#define QTAWS_LISTDEFAULTVOCABULARIESREQUEST_P_H

#include "connectrequest_p.h"
#include "listdefaultvocabulariesrequest.h"

namespace QtAws {
namespace Connect {

class ListDefaultVocabulariesRequest;

class ListDefaultVocabulariesRequestPrivate : public ConnectRequestPrivate {

public:
    ListDefaultVocabulariesRequestPrivate(const ConnectRequest::Action action,
                                   ListDefaultVocabulariesRequest * const q);
    ListDefaultVocabulariesRequestPrivate(const ListDefaultVocabulariesRequestPrivate &other,
                                   ListDefaultVocabulariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDefaultVocabulariesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

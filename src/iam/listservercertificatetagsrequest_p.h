// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATETAGSREQUEST_P_H
#define QTAWS_LISTSERVERCERTIFICATETAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listservercertificatetagsrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificateTagsRequest;

class ListServerCertificateTagsRequestPrivate : public IamRequestPrivate {

public:
    ListServerCertificateTagsRequestPrivate(const IamRequest::Action action,
                                   ListServerCertificateTagsRequest * const q);
    ListServerCertificateTagsRequestPrivate(const ListServerCertificateTagsRequestPrivate &other,
                                   ListServerCertificateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServerCertificateTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif

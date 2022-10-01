// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESRESPONSE_H
#define QTAWS_LISTDOMAINNAMESRESPONSE_H

#include "cloudsearchresponse.h"
#include "listdomainnamesrequest.h"

namespace QtAws {
namespace CloudSearch {

class ListDomainNamesResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT ListDomainNamesResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    ListDomainNamesResponse(const ListDomainNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainNamesResponse)
    Q_DISABLE_COPY(ListDomainNamesResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCETYPEDETAILSRESPONSE_H
#define QTAWS_LISTINSTANCETYPEDETAILSRESPONSE_H

#include "opensearchresponse.h"
#include "listinstancetypedetailsrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListInstanceTypeDetailsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT ListInstanceTypeDetailsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    ListInstanceTypeDetailsResponse(const ListInstanceTypeDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceTypeDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceTypeDetailsResponse)
    Q_DISABLE_COPY(ListInstanceTypeDetailsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

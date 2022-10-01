// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINRESPONSE_H
#define QTAWS_DELETEDOMAINRESPONSE_H

#include "opensearchresponse.h"
#include "deletedomainrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteDomainResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DeleteDomainResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DeleteDomainResponse(const DeleteDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainResponse)
    Q_DISABLE_COPY(DeleteDomainResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif

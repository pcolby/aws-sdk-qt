// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDPRODUCTSFORIMPORTRESPONSE_H
#define QTAWS_LISTENABLEDPRODUCTSFORIMPORTRESPONSE_H

#include "securityhubresponse.h"
#include "listenabledproductsforimportrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListEnabledProductsForImportResponsePrivate;

class QTAWSSECURITYHUB_EXPORT ListEnabledProductsForImportResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    ListEnabledProductsForImportResponse(const ListEnabledProductsForImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnabledProductsForImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnabledProductsForImportResponse)
    Q_DISABLE_COPY(ListEnabledProductsForImportResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

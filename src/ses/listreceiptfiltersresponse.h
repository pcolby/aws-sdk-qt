// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTFILTERSRESPONSE_H
#define QTAWS_LISTRECEIPTFILTERSRESPONSE_H

#include "sesresponse.h"
#include "listreceiptfiltersrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptFiltersResponsePrivate;

class QTAWSSES_EXPORT ListReceiptFiltersResponse : public SesResponse {
    Q_OBJECT

public:
    ListReceiptFiltersResponse(const ListReceiptFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReceiptFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceiptFiltersResponse)
    Q_DISABLE_COPY(ListReceiptFiltersResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

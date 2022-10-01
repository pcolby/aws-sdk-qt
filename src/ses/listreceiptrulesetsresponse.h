// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTRULESETSRESPONSE_H
#define QTAWS_LISTRECEIPTRULESETSRESPONSE_H

#include "sesresponse.h"
#include "listreceiptrulesetsrequest.h"

namespace QtAws {
namespace Ses {

class ListReceiptRuleSetsResponsePrivate;

class QTAWSSES_EXPORT ListReceiptRuleSetsResponse : public SesResponse {
    Q_OBJECT

public:
    ListReceiptRuleSetsResponse(const ListReceiptRuleSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReceiptRuleSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceiptRuleSetsResponse)
    Q_DISABLE_COPY(ListReceiptRuleSetsResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

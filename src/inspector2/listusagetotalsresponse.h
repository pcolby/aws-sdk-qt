// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGETOTALSRESPONSE_H
#define QTAWS_LISTUSAGETOTALSRESPONSE_H

#include "inspector2response.h"
#include "listusagetotalsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListUsageTotalsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListUsageTotalsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListUsageTotalsResponse(const ListUsageTotalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsageTotalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsageTotalsResponse)
    Q_DISABLE_COPY(ListUsageTotalsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif

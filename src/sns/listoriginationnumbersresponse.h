// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINATIONNUMBERSRESPONSE_H
#define QTAWS_LISTORIGINATIONNUMBERSRESPONSE_H

#include "snsresponse.h"
#include "listoriginationnumbersrequest.h"

namespace QtAws {
namespace Sns {

class ListOriginationNumbersResponsePrivate;

class QTAWSSNS_EXPORT ListOriginationNumbersResponse : public SnsResponse {
    Q_OBJECT

public:
    ListOriginationNumbersResponse(const ListOriginationNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOriginationNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginationNumbersResponse)
    Q_DISABLE_COPY(ListOriginationNumbersResponse)

};

} // namespace Sns
} // namespace QtAws

#endif

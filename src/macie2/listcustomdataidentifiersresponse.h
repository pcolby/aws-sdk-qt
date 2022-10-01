// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMDATAIDENTIFIERSRESPONSE_H
#define QTAWS_LISTCUSTOMDATAIDENTIFIERSRESPONSE_H

#include "macie2response.h"
#include "listcustomdataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListCustomDataIdentifiersResponsePrivate;

class QTAWSMACIE2_EXPORT ListCustomDataIdentifiersResponse : public Macie2Response {
    Q_OBJECT

public:
    ListCustomDataIdentifiersResponse(const ListCustomDataIdentifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomDataIdentifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomDataIdentifiersResponse)
    Q_DISABLE_COPY(ListCustomDataIdentifiersResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

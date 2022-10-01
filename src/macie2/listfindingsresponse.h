// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSRESPONSE_H
#define QTAWS_LISTFINDINGSRESPONSE_H

#include "macie2response.h"
#include "listfindingsrequest.h"

namespace QtAws {
namespace Macie2 {

class ListFindingsResponsePrivate;

class QTAWSMACIE2_EXPORT ListFindingsResponse : public Macie2Response {
    Q_OBJECT

public:
    ListFindingsResponse(const ListFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsResponse)
    Q_DISABLE_COPY(ListFindingsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

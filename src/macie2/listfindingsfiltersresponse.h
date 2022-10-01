// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSFILTERSRESPONSE_H
#define QTAWS_LISTFINDINGSFILTERSRESPONSE_H

#include "macie2response.h"
#include "listfindingsfiltersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListFindingsFiltersResponsePrivate;

class QTAWSMACIE2_EXPORT ListFindingsFiltersResponse : public Macie2Response {
    Q_OBJECT

public:
    ListFindingsFiltersResponse(const ListFindingsFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingsFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsFiltersResponse)
    Q_DISABLE_COPY(ListFindingsFiltersResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

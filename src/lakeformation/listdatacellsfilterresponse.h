// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACELLSFILTERRESPONSE_H
#define QTAWS_LISTDATACELLSFILTERRESPONSE_H

#include "lakeformationresponse.h"
#include "listdatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListDataCellsFilterResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ListDataCellsFilterResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ListDataCellsFilterResponse(const ListDataCellsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataCellsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataCellsFilterResponse)
    Q_DISABLE_COPY(ListDataCellsFilterResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

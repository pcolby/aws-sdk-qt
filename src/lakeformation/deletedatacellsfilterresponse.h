// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACELLSFILTERRESPONSE_H
#define QTAWS_DELETEDATACELLSFILTERRESPONSE_H

#include "lakeformationresponse.h"
#include "deletedatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteDataCellsFilterResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteDataCellsFilterResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DeleteDataCellsFilterResponse(const DeleteDataCellsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataCellsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataCellsFilterResponse)
    Q_DISABLE_COPY(DeleteDataCellsFilterResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACELLSFILTERRESPONSE_H
#define QTAWS_CREATEDATACELLSFILTERRESPONSE_H

#include "lakeformationresponse.h"
#include "createdatacellsfilterrequest.h"

namespace QtAws {
namespace LakeFormation {

class CreateDataCellsFilterResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT CreateDataCellsFilterResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    CreateDataCellsFilterResponse(const CreateDataCellsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataCellsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataCellsFilterResponse)
    Q_DISABLE_COPY(CreateDataCellsFilterResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

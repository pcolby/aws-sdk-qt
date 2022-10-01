// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLESTORAGEOPTIMIZERRESPONSE_H
#define QTAWS_UPDATETABLESTORAGEOPTIMIZERRESPONSE_H

#include "lakeformationresponse.h"
#include "updatetablestorageoptimizerrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableStorageOptimizerResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT UpdateTableStorageOptimizerResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    UpdateTableStorageOptimizerResponse(const UpdateTableStorageOptimizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTableStorageOptimizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableStorageOptimizerResponse)
    Q_DISABLE_COPY(UpdateTableStorageOptimizerResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

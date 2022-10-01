// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACELLSFILTERREQUEST_H
#define QTAWS_DELETEDATACELLSFILTERREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteDataCellsFilterRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteDataCellsFilterRequest : public LakeFormationRequest {

public:
    DeleteDataCellsFilterRequest(const DeleteDataCellsFilterRequest &other);
    DeleteDataCellsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataCellsFilterRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACELLSFILTERREQUEST_H
#define QTAWS_LISTDATACELLSFILTERREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListDataCellsFilterRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT ListDataCellsFilterRequest : public LakeFormationRequest {

public:
    ListDataCellsFilterRequest(const ListDataCellsFilterRequest &other);
    ListDataCellsFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataCellsFilterRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

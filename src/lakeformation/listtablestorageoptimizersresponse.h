// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESTORAGEOPTIMIZERSRESPONSE_H
#define QTAWS_LISTTABLESTORAGEOPTIMIZERSRESPONSE_H

#include "lakeformationresponse.h"
#include "listtablestorageoptimizersrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListTableStorageOptimizersResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ListTableStorageOptimizersResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ListTableStorageOptimizersResponse(const ListTableStorageOptimizersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTableStorageOptimizersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableStorageOptimizersResponse)
    Q_DISABLE_COPY(ListTableStorageOptimizersResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

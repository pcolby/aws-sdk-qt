// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLESTORAGEOPTIMIZERREQUEST_H
#define QTAWS_UPDATETABLESTORAGEOPTIMIZERREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableStorageOptimizerRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT UpdateTableStorageOptimizerRequest : public LakeFormationRequest {

public:
    UpdateTableStorageOptimizerRequest(const UpdateTableStorageOptimizerRequest &other);
    UpdateTableStorageOptimizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableStorageOptimizerRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

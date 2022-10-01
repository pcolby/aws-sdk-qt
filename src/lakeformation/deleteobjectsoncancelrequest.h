// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSONCANCELREQUEST_H
#define QTAWS_DELETEOBJECTSONCANCELREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteObjectsOnCancelRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteObjectsOnCancelRequest : public LakeFormationRequest {

public:
    DeleteObjectsOnCancelRequest(const DeleteObjectsOnCancelRequest &other);
    DeleteObjectsOnCancelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectsOnCancelRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

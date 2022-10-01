// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELFTAGREQUEST_H
#define QTAWS_DELETELFTAGREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteLFTagRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteLFTagRequest : public LakeFormationRequest {

public:
    DeleteLFTagRequest(const DeleteLFTagRequest &other);
    DeleteLFTagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

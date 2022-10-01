// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLFTAGSTORESOURCEREQUEST_H
#define QTAWS_ADDLFTAGSTORESOURCEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class AddLFTagsToResourceRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT AddLFTagsToResourceRequest : public LakeFormationRequest {

public:
    AddLFTagsToResourceRequest(const AddLFTagsToResourceRequest &other);
    AddLFTagsToResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddLFTagsToResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELFTAGSFROMRESOURCEREQUEST_H
#define QTAWS_REMOVELFTAGSFROMRESOURCEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class RemoveLFTagsFromResourceRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT RemoveLFTagsFromResourceRequest : public LakeFormationRequest {

public:
    RemoveLFTagsFromResourceRequest(const RemoveLFTagsFromResourceRequest &other);
    RemoveLFTagsFromResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveLFTagsFromResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

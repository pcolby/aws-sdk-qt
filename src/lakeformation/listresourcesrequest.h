// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESREQUEST_H
#define QTAWS_LISTRESOURCESREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListResourcesRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT ListResourcesRequest : public LakeFormationRequest {

public:
    ListResourcesRequest(const ListResourcesRequest &other);
    ListResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

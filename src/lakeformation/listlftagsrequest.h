// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLFTAGSREQUEST_H
#define QTAWS_LISTLFTAGSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListLFTagsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT ListLFTagsRequest : public LakeFormationRequest {

public:
    ListLFTagsRequest(const ListLFTagsRequest &other);
    ListLFTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

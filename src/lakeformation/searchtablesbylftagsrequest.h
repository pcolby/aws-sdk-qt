// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESBYLFTAGSREQUEST_H
#define QTAWS_SEARCHTABLESBYLFTAGSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchTablesByLFTagsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT SearchTablesByLFTagsRequest : public LakeFormationRequest {

public:
    SearchTablesByLFTagsRequest(const SearchTablesByLFTagsRequest &other);
    SearchTablesByLFTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTablesByLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

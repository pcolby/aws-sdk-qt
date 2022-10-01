// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDATABASESBYLFTAGSREQUEST_H
#define QTAWS_SEARCHDATABASESBYLFTAGSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class SearchDatabasesByLFTagsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT SearchDatabasesByLFTagsRequest : public LakeFormationRequest {

public:
    SearchDatabasesByLFTagsRequest(const SearchDatabasesByLFTagsRequest &other);
    SearchDatabasesByLFTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDatabasesByLFTagsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif

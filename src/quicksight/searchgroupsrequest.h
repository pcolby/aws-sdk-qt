// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGROUPSREQUEST_H
#define QTAWS_SEARCHGROUPSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchGroupsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT SearchGroupsRequest : public QuickSightRequest {

public:
    SearchGroupsRequest(const SearchGroupsRequest &other);
    SearchGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

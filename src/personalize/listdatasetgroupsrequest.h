// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETGROUPSREQUEST_H
#define QTAWS_LISTDATASETGROUPSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetGroupsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListDatasetGroupsRequest : public PersonalizeRequest {

public:
    ListDatasetGroupsRequest(const ListDatasetGroupsRequest &other);
    ListDatasetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetGroupsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

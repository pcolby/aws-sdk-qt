// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESREQUEST_H
#define QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ListAvailableManagementCidrRangesRequestPrivate;

class QTAWSWORKSPACES_EXPORT ListAvailableManagementCidrRangesRequest : public WorkSpacesRequest {

public:
    ListAvailableManagementCidrRangesRequest(const ListAvailableManagementCidrRangesRequest &other);
    ListAvailableManagementCidrRangesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagementCidrRangesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

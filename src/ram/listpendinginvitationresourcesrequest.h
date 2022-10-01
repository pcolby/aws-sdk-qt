// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPENDINGINVITATIONRESOURCESREQUEST_H
#define QTAWS_LISTPENDINGINVITATIONRESOURCESREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListPendingInvitationResourcesRequestPrivate;

class QTAWSRAM_EXPORT ListPendingInvitationResourcesRequest : public RamRequest {

public:
    ListPendingInvitationResourcesRequest(const ListPendingInvitationResourcesRequest &other);
    ListPendingInvitationResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPendingInvitationResourcesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTOCOLSLISTSREQUEST_H
#define QTAWS_LISTPROTOCOLSLISTSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class ListProtocolsListsRequestPrivate;

class QTAWSFMS_EXPORT ListProtocolsListsRequest : public FmsRequest {

public:
    ListProtocolsListsRequest(const ListProtocolsListsRequest &other);
    ListProtocolsListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtocolsListsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif

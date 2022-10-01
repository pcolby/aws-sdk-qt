// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONASSOCIATIONSREQUEST_H
#define QTAWS_LISTINTEGRATIONASSOCIATIONSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListIntegrationAssociationsRequestPrivate;

class QTAWSCONNECT_EXPORT ListIntegrationAssociationsRequest : public ConnectRequest {

public:
    ListIntegrationAssociationsRequest(const ListIntegrationAssociationsRequest &other);
    ListIntegrationAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIntegrationAssociationsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

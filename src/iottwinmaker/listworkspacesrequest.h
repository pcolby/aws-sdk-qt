// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESREQUEST_H
#define QTAWS_LISTWORKSPACESREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListWorkspacesRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT ListWorkspacesRequest : public IoTTwinMakerRequest {

public:
    ListWorkspacesRequest(const ListWorkspacesRequest &other);
    ListWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkspacesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

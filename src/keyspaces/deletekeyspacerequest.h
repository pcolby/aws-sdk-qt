// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSPACEREQUEST_H
#define QTAWS_DELETEKEYSPACEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class DeleteKeyspaceRequestPrivate;

class QTAWSKEYSPACES_EXPORT DeleteKeyspaceRequest : public KeyspacesRequest {

public:
    DeleteKeyspaceRequest(const DeleteKeyspaceRequest &other);
    DeleteKeyspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif

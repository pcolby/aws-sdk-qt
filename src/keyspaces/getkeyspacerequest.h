// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYSPACEREQUEST_H
#define QTAWS_GETKEYSPACEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class GetKeyspaceRequestPrivate;

class QTAWSKEYSPACES_EXPORT GetKeyspaceRequest : public KeyspacesRequest {

public:
    GetKeyspaceRequest(const GetKeyspaceRequest &other);
    GetKeyspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif

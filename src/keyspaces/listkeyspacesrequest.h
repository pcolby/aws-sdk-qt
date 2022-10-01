// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSPACESREQUEST_H
#define QTAWS_LISTKEYSPACESREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class ListKeyspacesRequestPrivate;

class QTAWSKEYSPACES_EXPORT ListKeyspacesRequest : public KeyspacesRequest {

public:
    ListKeyspacesRequest(const ListKeyspacesRequest &other);
    ListKeyspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyspacesRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif

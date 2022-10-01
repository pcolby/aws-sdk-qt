// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEREQUEST_H
#define QTAWS_RESTORETABLEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class RestoreTableRequestPrivate;

class QTAWSKEYSPACES_EXPORT RestoreTableRequest : public KeyspacesRequest {

public:
    RestoreTableRequest(const RestoreTableRequest &other);
    RestoreTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreTableRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif

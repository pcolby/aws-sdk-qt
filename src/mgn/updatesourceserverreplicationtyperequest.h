// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCESERVERREPLICATIONTYPEREQUEST_H
#define QTAWS_UPDATESOURCESERVERREPLICATIONTYPEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateSourceServerReplicationTypeRequestPrivate;

class QTAWSMGN_EXPORT UpdateSourceServerReplicationTypeRequest : public MgnRequest {

public:
    UpdateSourceServerReplicationTypeRequest(const UpdateSourceServerReplicationTypeRequest &other);
    UpdateSourceServerReplicationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSourceServerReplicationTypeRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

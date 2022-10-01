// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASESNAPSHOTREQUEST_H
#define QTAWS_CREATERELATIONALDATABASESNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseSnapshotRequest : public LightsailRequest {

public:
    CreateRelationalDatabaseSnapshotRequest(const CreateRelationalDatabaseSnapshotRequest &other);
    CreateRelationalDatabaseSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

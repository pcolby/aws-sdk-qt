// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTREQUEST_H
#define QTAWS_CREATERELATIONALDATABASEFROMSNAPSHOTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseFromSnapshotRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseFromSnapshotRequest : public LightsailRequest {

public:
    CreateRelationalDatabaseFromSnapshotRequest(const CreateRelationalDatabaseFromSnapshotRequest &other);
    CreateRelationalDatabaseFromSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseFromSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

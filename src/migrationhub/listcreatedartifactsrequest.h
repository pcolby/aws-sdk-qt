// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEDARTIFACTSREQUEST_H
#define QTAWS_LISTCREATEDARTIFACTSREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListCreatedArtifactsRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ListCreatedArtifactsRequest : public MigrationHubRequest {

public:
    ListCreatedArtifactsRequest(const ListCreatedArtifactsRequest &other);
    ListCreatedArtifactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCreatedArtifactsRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif

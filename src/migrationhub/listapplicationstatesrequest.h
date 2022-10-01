// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSTATESREQUEST_H
#define QTAWS_LISTAPPLICATIONSTATESREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListApplicationStatesRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ListApplicationStatesRequest : public MigrationHubRequest {

public:
    ListApplicationStatesRequest(const ListApplicationStatesRequest &other);
    ListApplicationStatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationStatesRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif

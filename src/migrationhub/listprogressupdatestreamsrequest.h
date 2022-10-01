// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROGRESSUPDATESTREAMSREQUEST_H
#define QTAWS_LISTPROGRESSUPDATESTREAMSREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListProgressUpdateStreamsRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ListProgressUpdateStreamsRequest : public MigrationHubRequest {

public:
    ListProgressUpdateStreamsRequest(const ListProgressUpdateStreamsRequest &other);
    ListProgressUpdateStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProgressUpdateStreamsRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif

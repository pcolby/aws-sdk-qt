// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSETREQUEST_H
#define QTAWS_DELETEREPLICATIONSETREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteReplicationSetRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteReplicationSetRequest : public SsmIncidentsRequest {

public:
    DeleteReplicationSetRequest(const DeleteReplicationSetRequest &other);
    DeleteReplicationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

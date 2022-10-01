// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONSETREQUEST_H
#define QTAWS_UPDATEREPLICATIONSETREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateReplicationSetRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateReplicationSetRequest : public SsmIncidentsRequest {

public:
    UpdateReplicationSetRequest(const UpdateReplicationSetRequest &other);
    UpdateReplicationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

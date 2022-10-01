// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONSETREQUEST_H
#define QTAWS_GETREPLICATIONSETREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetReplicationSetRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT GetReplicationSetRequest : public SsmIncidentsRequest {

public:
    GetReplicationSetRequest(const GetReplicationSetRequest &other);
    GetReplicationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

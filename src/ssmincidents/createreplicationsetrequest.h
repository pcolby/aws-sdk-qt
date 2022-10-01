// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSETREQUEST_H
#define QTAWS_CREATEREPLICATIONSETREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateReplicationSetRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT CreateReplicationSetRequest : public SsmIncidentsRequest {

public:
    CreateReplicationSetRequest(const CreateReplicationSetRequest &other);
    CreateReplicationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationSetRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

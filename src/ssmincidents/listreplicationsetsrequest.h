// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLICATIONSETSREQUEST_H
#define QTAWS_LISTREPLICATIONSETSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListReplicationSetsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT ListReplicationSetsRequest : public SsmIncidentsRequest {

public:
    ListReplicationSetsRequest(const ListReplicationSetsRequest &other);
    ListReplicationSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReplicationSetsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

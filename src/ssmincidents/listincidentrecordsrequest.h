// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCIDENTRECORDSREQUEST_H
#define QTAWS_LISTINCIDENTRECORDSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListIncidentRecordsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT ListIncidentRecordsRequest : public SsmIncidentsRequest {

public:
    ListIncidentRecordsRequest(const ListIncidentRecordsRequest &other);
    ListIncidentRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIncidentRecordsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

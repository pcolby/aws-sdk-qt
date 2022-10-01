// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINCIDENTRECORDREQUEST_H
#define QTAWS_GETINCIDENTRECORDREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetIncidentRecordRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT GetIncidentRecordRequest : public SsmIncidentsRequest {

public:
    GetIncidentRecordRequest(const GetIncidentRecordRequest &other);
    GetIncidentRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

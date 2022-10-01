// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINCIDENTRECORDREQUEST_H
#define QTAWS_UPDATEINCIDENTRECORDREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateIncidentRecordRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateIncidentRecordRequest : public SsmIncidentsRequest {

public:
    UpdateIncidentRecordRequest(const UpdateIncidentRecordRequest &other);
    UpdateIncidentRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

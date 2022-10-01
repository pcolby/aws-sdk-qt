// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINCIDENTRECORDREQUEST_H
#define QTAWS_DELETEINCIDENTRECORDREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteIncidentRecordRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteIncidentRecordRequest : public SsmIncidentsRequest {

public:
    DeleteIncidentRecordRequest(const DeleteIncidentRecordRequest &other);
    DeleteIncidentRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIncidentRecordRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEPLANREQUEST_H
#define QTAWS_DELETERESPONSEPLANREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteResponsePlanRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteResponsePlanRequest : public SsmIncidentsRequest {

public:
    DeleteResponsePlanRequest(const DeleteResponsePlanRequest &other);
    DeleteResponsePlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResponsePlanRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

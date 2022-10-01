// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINCIDENTREQUEST_H
#define QTAWS_STARTINCIDENTREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class StartIncidentRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT StartIncidentRequest : public SsmIncidentsRequest {

public:
    StartIncidentRequest(const StartIncidentRequest &other);
    StartIncidentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartIncidentRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

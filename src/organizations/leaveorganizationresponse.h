// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEAVEORGANIZATIONRESPONSE_H
#define QTAWS_LEAVEORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "leaveorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class LeaveOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT LeaveOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    LeaveOrganizationResponse(const LeaveOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LeaveOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LeaveOrganizationResponse)
    Q_DISABLE_COPY(LeaveOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif

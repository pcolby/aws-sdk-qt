// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONRESPONSE_H
#define QTAWS_CREATEORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "createorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT CreateOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    CreateOrganizationResponse(const CreateOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrganizationResponse)
    Q_DISABLE_COPY(CreateOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif

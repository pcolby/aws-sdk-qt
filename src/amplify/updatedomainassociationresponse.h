// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEDOMAINASSOCIATIONRESPONSE_H

#include "amplifyresponse.h"
#include "updatedomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateDomainAssociationResponsePrivate;

class QTAWSAMPLIFY_EXPORT UpdateDomainAssociationResponse : public AmplifyResponse {
    Q_OBJECT

public:
    UpdateDomainAssociationResponse(const UpdateDomainAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainAssociationResponse)
    Q_DISABLE_COPY(UpdateDomainAssociationResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

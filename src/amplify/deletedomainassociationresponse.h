// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINASSOCIATIONRESPONSE_H
#define QTAWS_DELETEDOMAINASSOCIATIONRESPONSE_H

#include "amplifyresponse.h"
#include "deletedomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteDomainAssociationResponsePrivate;

class QTAWSAMPLIFY_EXPORT DeleteDomainAssociationResponse : public AmplifyResponse {
    Q_OBJECT

public:
    DeleteDomainAssociationResponse(const DeleteDomainAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainAssociationResponse)
    Q_DISABLE_COPY(DeleteDomainAssociationResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif

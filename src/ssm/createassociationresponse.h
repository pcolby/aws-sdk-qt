// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONRESPONSE_H
#define QTAWS_CREATEASSOCIATIONRESPONSE_H

#include "ssmresponse.h"
#include "createassociationrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationResponsePrivate;

class QTAWSSSM_EXPORT CreateAssociationResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateAssociationResponse(const CreateAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssociationResponse)
    Q_DISABLE_COPY(CreateAssociationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

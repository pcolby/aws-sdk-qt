// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEASSOCIATIONRESPONSE_H

#include "ssmresponse.h"
#include "updateassociationrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationResponsePrivate;

class QTAWSSSM_EXPORT UpdateAssociationResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateAssociationResponse(const UpdateAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssociationResponse)
    Q_DISABLE_COPY(UpdateAssociationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

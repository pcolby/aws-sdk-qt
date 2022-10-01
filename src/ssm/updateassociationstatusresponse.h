// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_H
#define QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_H

#include "ssmresponse.h"
#include "updateassociationstatusrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationStatusResponsePrivate;

class QTAWSSSM_EXPORT UpdateAssociationStatusResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateAssociationStatusResponse(const UpdateAssociationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAssociationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssociationStatusResponse)
    Q_DISABLE_COPY(UpdateAssociationStatusResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

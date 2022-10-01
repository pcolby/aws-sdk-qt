// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSMETADATARESPONSE_H
#define QTAWS_UPDATEOPSMETADATARESPONSE_H

#include "ssmresponse.h"
#include "updateopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsMetadataResponsePrivate;

class QTAWSSSM_EXPORT UpdateOpsMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateOpsMetadataResponse(const UpdateOpsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOpsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpsMetadataResponse)
    Q_DISABLE_COPY(UpdateOpsMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

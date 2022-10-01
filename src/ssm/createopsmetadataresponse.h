// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSMETADATARESPONSE_H
#define QTAWS_CREATEOPSMETADATARESPONSE_H

#include "ssmresponse.h"
#include "createopsmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class CreateOpsMetadataResponsePrivate;

class QTAWSSSM_EXPORT CreateOpsMetadataResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateOpsMetadataResponse(const CreateOpsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOpsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOpsMetadataResponse)
    Q_DISABLE_COPY(CreateOpsMetadataResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

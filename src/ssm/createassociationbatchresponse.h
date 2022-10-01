// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONBATCHRESPONSE_H
#define QTAWS_CREATEASSOCIATIONBATCHRESPONSE_H

#include "ssmresponse.h"
#include "createassociationbatchrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationBatchResponsePrivate;

class QTAWSSSM_EXPORT CreateAssociationBatchResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateAssociationBatchResponse(const CreateAssociationBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAssociationBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAssociationBatchResponse)
    Q_DISABLE_COPY(CreateAssociationBatchResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

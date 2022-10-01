// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDATASYNCRESPONSE_H
#define QTAWS_CREATERESOURCEDATASYNCRESPONSE_H

#include "ssmresponse.h"
#include "createresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class CreateResourceDataSyncResponsePrivate;

class QTAWSSSM_EXPORT CreateResourceDataSyncResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateResourceDataSyncResponse(const CreateResourceDataSyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceDataSyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDataSyncResponse)
    Q_DISABLE_COPY(CreateResourceDataSyncResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDATASYNCRESPONSE_H
#define QTAWS_UPDATERESOURCEDATASYNCRESPONSE_H

#include "ssmresponse.h"
#include "updateresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateResourceDataSyncResponsePrivate;

class QTAWSSSM_EXPORT UpdateResourceDataSyncResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateResourceDataSyncResponse(const UpdateResourceDataSyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceDataSyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceDataSyncResponse)
    Q_DISABLE_COPY(UpdateResourceDataSyncResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

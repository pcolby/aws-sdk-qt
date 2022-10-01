// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDATASYNCRESPONSE_H
#define QTAWS_DELETERESOURCEDATASYNCRESPONSE_H

#include "ssmresponse.h"
#include "deleteresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteResourceDataSyncResponsePrivate;

class QTAWSSSM_EXPORT DeleteResourceDataSyncResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteResourceDataSyncResponse(const DeleteResourceDataSyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceDataSyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceDataSyncResponse)
    Q_DISABLE_COPY(DeleteResourceDataSyncResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

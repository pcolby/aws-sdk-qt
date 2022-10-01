// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETRESPONSE_H
#define QTAWS_DELETEDATASETRESPONSE_H

#include "finspacedataresponse.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace FinspaceData {

class DeleteDatasetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT DeleteDatasetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    DeleteDatasetResponse(const DeleteDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetResponse)
    Q_DISABLE_COPY(DeleteDatasetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

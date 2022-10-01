// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_H
#define QTAWS_UPDATEDATASETRESPONSE_H

#include "finspacedataresponse.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateDatasetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT UpdateDatasetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    UpdateDatasetResponse(const UpdateDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetResponse)
    Q_DISABLE_COPY(UpdateDatasetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

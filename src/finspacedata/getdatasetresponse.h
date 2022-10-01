// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETRESPONSE_H
#define QTAWS_GETDATASETRESPONSE_H

#include "finspacedataresponse.h"
#include "getdatasetrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDatasetResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetDatasetResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetDatasetResponse(const GetDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatasetResponse)
    Q_DISABLE_COPY(GetDatasetResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

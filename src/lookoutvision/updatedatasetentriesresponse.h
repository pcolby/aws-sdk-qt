// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETENTRIESRESPONSE_H
#define QTAWS_UPDATEDATASETENTRIESRESPONSE_H

#include "lookoutvisionresponse.h"
#include "updatedatasetentriesrequest.h"

namespace QtAws {
namespace LookoutVision {

class UpdateDatasetEntriesResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT UpdateDatasetEntriesResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    UpdateDatasetEntriesResponse(const UpdateDatasetEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasetEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetEntriesResponse)
    Q_DISABLE_COPY(UpdateDatasetEntriesResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

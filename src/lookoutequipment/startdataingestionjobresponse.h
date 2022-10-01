// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATAINGESTIONJOBRESPONSE_H
#define QTAWS_STARTDATAINGESTIONJOBRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "startdataingestionjobrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartDataIngestionJobResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StartDataIngestionJobResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    StartDataIngestionJobResponse(const StartDataIngestionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDataIngestionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataIngestionJobResponse)
    Q_DISABLE_COPY(StartDataIngestionJobResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif

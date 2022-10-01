// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONV2JOBSRESPONSE_H
#define QTAWS_LISTENTITIESDETECTIONV2JOBSRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "listentitiesdetectionv2jobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListEntitiesDetectionV2JobsResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListEntitiesDetectionV2JobsResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    ListEntitiesDetectionV2JobsResponse(const ListEntitiesDetectionV2JobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitiesDetectionV2JobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesDetectionV2JobsResponse)
    Q_DISABLE_COPY(ListEntitiesDetectionV2JobsResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif

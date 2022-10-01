// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORLDEXPORTJOBSRESPONSE_H
#define QTAWS_LISTWORLDEXPORTJOBSRESPONSE_H

#include "robomakerresponse.h"
#include "listworldexportjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListWorldExportJobsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListWorldExportJobsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListWorldExportJobsResponse(const ListWorldExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorldExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorldExportJobsResponse)
    Q_DISABLE_COPY(ListWorldExportJobsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

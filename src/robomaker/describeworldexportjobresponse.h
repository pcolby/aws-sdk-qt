// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDEXPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEWORLDEXPORTJOBRESPONSE_H

#include "robomakerresponse.h"
#include "describeworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldExportJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldExportJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeWorldExportJobResponse(const DescribeWorldExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorldExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldExportJobResponse)
    Q_DISABLE_COPY(DescribeWorldExportJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

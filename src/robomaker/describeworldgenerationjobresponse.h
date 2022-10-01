// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDGENERATIONJOBRESPONSE_H
#define QTAWS_DESCRIBEWORLDGENERATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "describeworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldGenerationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldGenerationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeWorldGenerationJobResponse(const DescribeWorldGenerationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorldGenerationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldGenerationJobResponse)
    Q_DISABLE_COPY(DescribeWorldGenerationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

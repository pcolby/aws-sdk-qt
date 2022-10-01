// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELRESPONSE_H
#define QTAWS_DESCRIBEMODELRESPONSE_H

#include "lookoutvisionresponse.h"
#include "describemodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT DescribeModelResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    DescribeModelResponse(const DescribeModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelResponse)
    Q_DISABLE_COPY(DescribeModelResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

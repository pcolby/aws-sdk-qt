// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDRESPONSE_H
#define QTAWS_DESCRIBEWORLDRESPONSE_H

#include "robomakerresponse.h"
#include "describeworldrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeWorldResponse(const DescribeWorldRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorldRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldResponse)
    Q_DISABLE_COPY(DescribeWorldResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

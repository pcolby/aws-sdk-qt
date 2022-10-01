// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTEPRESPONSE_H
#define QTAWS_DESCRIBESTEPRESPONSE_H

#include "emrresponse.h"
#include "describesteprequest.h"

namespace QtAws {
namespace Emr {

class DescribeStepResponsePrivate;

class QTAWSEMR_EXPORT DescribeStepResponse : public EmrResponse {
    Q_OBJECT

public:
    DescribeStepResponse(const DescribeStepRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStepRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStepResponse)
    Q_DISABLE_COPY(DescribeStepResponse)

};

} // namespace Emr
} // namespace QtAws

#endif

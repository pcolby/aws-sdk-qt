// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIORESPONSE_H
#define QTAWS_DESCRIBESTUDIORESPONSE_H

#include "emrresponse.h"
#include "describestudiorequest.h"

namespace QtAws {
namespace Emr {

class DescribeStudioResponsePrivate;

class QTAWSEMR_EXPORT DescribeStudioResponse : public EmrResponse {
    Q_OBJECT

public:
    DescribeStudioResponse(const DescribeStudioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStudioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStudioResponse)
    Q_DISABLE_COPY(DescribeStudioResponse)

};

} // namespace Emr
} // namespace QtAws

#endif

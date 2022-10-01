// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBTEMPLATERESPONSE_H
#define QTAWS_DESCRIBEJOBTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "describejobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobTemplateResponsePrivate;

class QTAWSIOT_EXPORT DescribeJobTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeJobTemplateResponse(const DescribeJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobTemplateResponse)
    Q_DISABLE_COPY(DescribeJobTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

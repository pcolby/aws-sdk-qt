// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMITIGATIONACTIONRESPONSE_H
#define QTAWS_DESCRIBEMITIGATIONACTIONRESPONSE_H

#include "iotresponse.h"
#include "describemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeMitigationActionResponsePrivate;

class QTAWSIOT_EXPORT DescribeMitigationActionResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeMitigationActionResponse(const DescribeMitigationActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMitigationActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMitigationActionResponse)
    Q_DISABLE_COPY(DescribeMitigationActionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

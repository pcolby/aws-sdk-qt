// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDJOBTEMPLATERESPONSE_H
#define QTAWS_DESCRIBEMANAGEDJOBTEMPLATERESPONSE_H

#include "iotresponse.h"
#include "describemanagedjobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeManagedJobTemplateResponsePrivate;

class QTAWSIOT_EXPORT DescribeManagedJobTemplateResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeManagedJobTemplateResponse(const DescribeManagedJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeManagedJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedJobTemplateResponse)
    Q_DISABLE_COPY(DescribeManagedJobTemplateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

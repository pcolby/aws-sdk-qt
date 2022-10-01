// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_H
#define QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "addapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationOutputResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationOutputResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    AddApplicationOutputResponse(const AddApplicationOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationOutputResponse)
    Q_DISABLE_COPY(AddApplicationOutputResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

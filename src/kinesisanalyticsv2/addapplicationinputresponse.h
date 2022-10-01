// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTRESPONSE_H
#define QTAWS_ADDAPPLICATIONINPUTRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "addapplicationinputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationInputResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    AddApplicationInputResponse(const AddApplicationInputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationInputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationInputResponse)
    Q_DISABLE_COPY(AddApplicationInputResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

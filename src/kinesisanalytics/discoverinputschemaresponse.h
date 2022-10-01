// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMARESPONSE_H
#define QTAWS_DISCOVERINPUTSCHEMARESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "discoverinputschemarequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DiscoverInputSchemaResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT DiscoverInputSchemaResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    DiscoverInputSchemaResponse(const DiscoverInputSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DiscoverInputSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverInputSchemaResponse)
    Q_DISABLE_COPY(DiscoverInputSchemaResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMARESPONSE_H
#define QTAWS_DISCOVERINPUTSCHEMARESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "discoverinputschemarequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DiscoverInputSchemaResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DiscoverInputSchemaResponse : public KinesisAnalyticsV2Response {
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

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMAREQUEST_H
#define QTAWS_DISCOVERINPUTSCHEMAREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DiscoverInputSchemaRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT DiscoverInputSchemaRequest : public KinesisAnalyticsRequest {

public:
    DiscoverInputSchemaRequest(const DiscoverInputSchemaRequest &other);
    DiscoverInputSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverInputSchemaRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

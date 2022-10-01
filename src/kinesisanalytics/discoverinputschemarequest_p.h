// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERINPUTSCHEMAREQUEST_P_H
#define QTAWS_DISCOVERINPUTSCHEMAREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "discoverinputschemarequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DiscoverInputSchemaRequest;

class DiscoverInputSchemaRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    DiscoverInputSchemaRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   DiscoverInputSchemaRequest * const q);
    DiscoverInputSchemaRequestPrivate(const DiscoverInputSchemaRequestPrivate &other,
                                   DiscoverInputSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DiscoverInputSchemaRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif

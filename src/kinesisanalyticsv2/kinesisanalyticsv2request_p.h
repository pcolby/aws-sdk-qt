/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_KINESISANALYTICSV2REQUEST_P_H
#define QTAWS_KINESISANALYTICSV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2Request;

class QTAWS_EXPORT KinesisAnalyticsV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisAnalyticsV2Request::Action action; ///< KinesisAnalyticsV2 action to be performed.
    QString apiVersion;        ///< KinesisAnalyticsV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisAnalyticsV2 request (query string) parameters. @todo?

    KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2Request::Action action, KinesisAnalyticsV2Request * const q);
    KinesisAnalyticsV2RequestPrivate(const KinesisAnalyticsV2RequestPrivate &other, KinesisAnalyticsV2Request * const q);

    static QString toString(const KinesisAnalyticsV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisAnalyticsV2Request)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

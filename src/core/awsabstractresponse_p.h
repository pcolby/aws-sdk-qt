// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTRESPONSE_P_H
#define AWSABSTRACTRESPONSE_P_H

#include "qtawscoreglobal.h"

#include <QVariantMap>
#include <QXmlStreamReader>

class QNetworkReply;

namespace QtAws {
namespace Core {

class AwsAbstractRequest;
class AwsAbstractResponse;

// Exported for *internal* use by other QtAws modules only.
class QTAWSCORE_EXPORT AwsAbstractResponsePrivate {

public:
    QNetworkReply * reply;              ///< Network reply for this response.
    const AwsAbstractRequest * request; ///< AWS request for this response.
    QXmlStreamReader::Error xmlError;   ///< XML parse error code.
    QString xmlErrorString;             ///< XML parse error string.

    explicit AwsAbstractResponsePrivate(AwsAbstractResponse * const q);

    virtual ~AwsAbstractResponsePrivate();

protected:
    AwsAbstractResponse * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractResponse)
    Q_DISABLE_COPY(AwsAbstractResponsePrivate)

};

} // namespace Core
} // namespace QtAws

#endif

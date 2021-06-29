/*
    Copyright 2013-2021 Paul Colby

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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

class AwsAbstractResponsePrivate {

public:
    QNetworkReply * reply;              ///< Network reply for this response.
    const AwsAbstractRequest * request; ///< AWS request for this response.
    QXmlStreamReader::Error xmlError;   ///< XML parse error code.
    QString xmlErrorString;             ///< XML parse error string.

    AwsAbstractResponsePrivate(AwsAbstractResponse * const q);

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

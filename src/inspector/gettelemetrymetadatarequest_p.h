/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETTELEMETRYMETADATAREQUEST_P_H
#define QTAWS_GETTELEMETRYMETADATAREQUEST_P_H

#include "inspector_p.h"
#include "gettelemetrymetadatarequest.h"

namespace AWS {

namespace Inspector {

class GetTelemetryMetadataRequest;

class QTAWS_EXPORT GetTelemetryMetadataRequestPrivate : public InspectorPrivate {

public:
    GetTelemetryMetadataRequestPrivate(const Inspector::Action action,
                                   GetTelemetryMetadataRequest * const q);
    GetTelemetryMetadataRequestPrivate(const GetTelemetryMetadataRequestPrivate &other,
                                   GetTelemetryMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTelemetryMetadataRequest)

};

} // namespace Inspector
} // namespace AWS

#endif

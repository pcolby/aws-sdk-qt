// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTSNAPSHOTRECORDSREQUEST_H
#define QTAWS_GETEXPORTSNAPSHOTRECORDSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetExportSnapshotRecordsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetExportSnapshotRecordsRequest : public LightsailRequest {

public:
    GetExportSnapshotRecordsRequest(const GetExportSnapshotRecordsRequest &other);
    GetExportSnapshotRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportSnapshotRecordsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

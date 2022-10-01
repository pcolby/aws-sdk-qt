// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMPORTREQUEST_H
#define QTAWS_STOPIMPORTREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopImportRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT StopImportRequest : public CloudTrailRequest {

public:
    StopImportRequest(const StopImportRequest &other);
    StopImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopImportRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

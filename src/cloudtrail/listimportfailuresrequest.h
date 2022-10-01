// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTFAILURESREQUEST_H
#define QTAWS_LISTIMPORTFAILURESREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListImportFailuresRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT ListImportFailuresRequest : public CloudTrailRequest {

public:
    ListImportFailuresRequest(const ListImportFailuresRequest &other);
    ListImportFailuresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportFailuresRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

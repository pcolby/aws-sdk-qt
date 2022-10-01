// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETENTRIESREQUEST_H
#define QTAWS_UPDATEDATASETENTRIESREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class UpdateDatasetEntriesRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT UpdateDatasetEntriesRequest : public LookoutVisionRequest {

public:
    UpdateDatasetEntriesRequest(const UpdateDatasetEntriesRequest &other);
    UpdateDatasetEntriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetEntriesRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDATASYNCREQUEST_H
#define QTAWS_UPDATERESOURCEDATASYNCREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateResourceDataSyncRequestPrivate;

class QTAWSSSM_EXPORT UpdateResourceDataSyncRequest : public SsmRequest {

public:
    UpdateResourceDataSyncRequest(const UpdateResourceDataSyncRequest &other);
    UpdateResourceDataSyncRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

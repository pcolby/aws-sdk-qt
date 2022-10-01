// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDATASYNCREQUEST_H
#define QTAWS_CREATERESOURCEDATASYNCREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateResourceDataSyncRequestPrivate;

class QTAWSSSM_EXPORT CreateResourceDataSyncRequest : public SsmRequest {

public:
    CreateResourceDataSyncRequest(const CreateResourceDataSyncRequest &other);
    CreateResourceDataSyncRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

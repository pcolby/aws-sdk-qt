// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDATASYNCREQUEST_H
#define QTAWS_DELETERESOURCEDATASYNCREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteResourceDataSyncRequestPrivate;

class QTAWSSSM_EXPORT DeleteResourceDataSyncRequest : public SsmRequest {

public:
    DeleteResourceDataSyncRequest(const DeleteResourceDataSyncRequest &other);
    DeleteResourceDataSyncRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceDataSyncRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

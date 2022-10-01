// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMETADATAREQUEST_H
#define QTAWS_UPDATECONTACTFLOWMETADATAREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowMetadataRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowMetadataRequest : public ConnectRequest {

public:
    UpdateContactFlowMetadataRequest(const UpdateContactFlowMetadataRequest &other);
    UpdateContactFlowMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowMetadataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

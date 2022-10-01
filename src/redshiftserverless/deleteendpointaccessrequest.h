// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTACCESSREQUEST_H
#define QTAWS_DELETEENDPOINTACCESSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteEndpointAccessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteEndpointAccessRequest : public RedshiftServerlessRequest {

public:
    DeleteEndpointAccessRequest(const DeleteEndpointAccessRequest &other);
    DeleteEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

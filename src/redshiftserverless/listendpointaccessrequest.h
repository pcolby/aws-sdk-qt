// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTACCESSREQUEST_H
#define QTAWS_LISTENDPOINTACCESSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListEndpointAccessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListEndpointAccessRequest : public RedshiftServerlessRequest {

public:
    ListEndpointAccessRequest(const ListEndpointAccessRequest &other);
    ListEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSREQUEST_H
#define QTAWS_LISTRECOVERYPOINTSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListRecoveryPointsRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListRecoveryPointsRequest : public RedshiftServerlessRequest {

public:
    ListRecoveryPointsRequest(const ListRecoveryPointsRequest &other);
    ListRecoveryPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif

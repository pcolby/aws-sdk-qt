// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKINGLOCATIONREQUEST_H
#define QTAWS_GETWORKINGLOCATIONREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetWorkingLocationRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetWorkingLocationRequest : public FinspaceDataRequest {

public:
    GetWorkingLocationRequest(const GetWorkingLocationRequest &other);
    GetWorkingLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkingLocationRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

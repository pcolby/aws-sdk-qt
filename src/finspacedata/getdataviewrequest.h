// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAVIEWREQUEST_H
#define QTAWS_GETDATAVIEWREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDataViewRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetDataViewRequest : public FinspaceDataRequest {

public:
    GetDataViewRequest(const GetDataViewRequest &other);
    GetDataViewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataViewRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

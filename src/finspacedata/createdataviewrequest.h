// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAVIEWREQUEST_H
#define QTAWS_CREATEDATAVIEWREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class CreateDataViewRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT CreateDataViewRequest : public FinspaceDataRequest {

public:
    CreateDataViewRequest(const CreateDataViewRequest &other);
    CreateDataViewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataViewRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif

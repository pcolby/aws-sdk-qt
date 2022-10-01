// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETGROUPREQUEST_H
#define QTAWS_CREATEDATASETGROUPREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetGroupRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetGroupRequest : public PersonalizeRequest {

public:
    CreateDatasetGroupRequest(const CreateDatasetGroupRequest &other);
    CreateDatasetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetGroupRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
